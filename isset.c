#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[], char* envp[]) 
{
 
 int iZaehler = 1;
 int iVerbose = 0;
 char sV[] = "-v";
 
 
 if (argv[1] == 0)
 {
   return 0;            //Keine Argumente angegeben
 }
 
 
 while (argv[iZaehler] != 0)            
 {
        if (strcmp(argv[iZaehler], sV) == 0)     //-v-Argument finden
        {       
                
                iVerbose = 1;
                break;
        }
        iZaehler ++;
 }
 
 
if (getenv(argv[1]) != 0)
{
        if (iVerbose == 1)
        {
                printf("Umgebungsvariable %s=%s\n",argv[1], getenv(argv[1]));
        }
        return 1;               //Argument ist Umgebungsvariable
}
 
  
 return 0;

}
