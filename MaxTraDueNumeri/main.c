#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a,b,max;
  printf("Digita il primo numero:");
  scanf("%d",&a);
  printf("Digita il secondo numero:");
  scanf("%d",&b);
  if (a>b) { max=a; }
  else { max=b; }
  printf("Max %d",max);
  // operatore ?
  max =(a>b)?a:b;
  printf("Max %d",max);
  system("PAUSE");
  return 0;
}
