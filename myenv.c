#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
 
 int iZaehler = 0;
 
 while (envp[iZaehler] != 0)
 {
        printf("%s\n",envp[iZaehler]);
        iZaehler++;
 }
 
 printf("\n---\nAnzahl Umgebungsvariablen: %i\n",iZaehler);
 
 return 0;

}
