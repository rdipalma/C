#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //dichiara tre variabili intere
  int a,b,ris=0;
  /* 
  legge il primo adddendo 
  */
  printf("Inserisci il primo addendo:");
  scanf("%d\n",&a);
  /* 
  legge il secondo addendo
  */
  printf("Inserisci il secondo addendo:");  
  scanf("%d\n",&b);
  // stampa il risultato
  ris=a+b;
  printf("Il risultato e' %d",ris);
  system("PAUSE");	
  return 0;
}
