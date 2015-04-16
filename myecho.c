#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
  int iZaehler = 1;
  if (argv[1] == 0)
  {
     printf("\n");
     return 0;			//Keine Argumente, leere Zeile ausgeben
  }
  else 
  {
     while (iZaehler < argc)
     {
       printf("%s ",argv[iZaehler]);	//Argumente ausgeben
       iZaehler++;
     }
   }

  printf("\n");  

  return 0;
}
