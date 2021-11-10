#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, c;
    printf("donner moi la temperature en degre C : ");
    scanf("%f",&c);
    F = ((c * 1.8) + 32);
    printf("la temperature en Fahrenheit est %.2f",F);
    return 0;
}