#include <stdio.h>
int main()
{
    int a;
    printf("entrer le nombre entier a : ");
    scanf("%d",&a);
    if (a%2==0)
    printf(" le nombre a est pair");
    else 
    printf("le nombre a est impair");
    return 0;
}