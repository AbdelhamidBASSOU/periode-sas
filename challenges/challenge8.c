#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S,M,c,a,b;
    
   printf("donner moi la valeur de a");
   scanf("%d",&a);
   printf("donner la valeur de b");
   scanf("%d",&b);
   printf("donner moi la valeur de c");
   scanf("%d",&c);
   S=a+b+c;
   M=(S)/3;
   printf("la somme est egale a : %d",S);
   printf("la Moyenne est egale a : %d",M);
   
    return 0;
}