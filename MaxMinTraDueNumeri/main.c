#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min;
    printf("Inserisci il primo numero\n");
    scanf("%d",&a);
    printf("Inserisci il secondo numero\n");
    scanf("%d",&b);
    printf("Inserisci il terzo numero\n");
    scanf("%d",&c);
    max=(a>b?a:b);
    max=(max>c?max:c);
    printf("il massimo e' %d\n",max);
    //
    min=(a<b?a:b);
    min=(min<c?min:c);
    printf("il minimo e' %d\n",min);
    //
    return 0;
}
