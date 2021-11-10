#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, c;
    printf("donner moi la temperature en degre F : ");
    scanf("%f",&F);
    c = (F-32)/1.8;
    printf("la temperature en Celsius est %.2f",c);
    return 0;
}