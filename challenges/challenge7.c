#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S, SS,M,D,R,a,b;
    
   printf("donner moi la valeur de a");
   scanf("%d",&a);
   printf("donner la valeur de b");
   scanf("%d",&b);
   S=a+b;
   SS=a-b;
   M=a*b;
   D=a/b;
   R=a%b;
   printf("laddition est egale a : %d",S);
   printf("la soustraction est egale a : %d",SS);
   printf("la multiplication est egale a  %d:",M);
   printf("la division est egale a : %d",D);
   printf("le reste de la division est : %d",R);
    return 0;
}