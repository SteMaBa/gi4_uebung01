#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[], char* envp[]) 
{

  int iZaehler = 0;
  int pid = 0;
   
  while (argv[iZaehler] != 0)   //Argumentlistenlänge
  {
      iZaehler ++;  
  }
  
  
  char * pNeueArg[iZaehler];    //Neues Array um 1 kürzer
  
  iZaehler = 0;
  
  while (argv[iZaehler+1] != 0)         //Argumentliste einen Platz nach vorn schieben
  {
      pNeueArg[iZaehler] =  argv[iZaehler+1];
      iZaehler ++;  
  }
  
  pNeueArg[iZaehler] = 0;
 
 
 
  
  if (argv[1] == 0)
  {
        return 0;       //Keine Argumente
  }
  
 
  pid = fork();
  printf("Prozess-ID: %d\n", pid);
  if (pid == 0)
  {
        execv(argv[1], pNeueArg);     //Programm mit neuen Argumenten (nur im Kindprozess) aufrufen
  }
  
  
  
  return 0;
}
