#include <stdio.h>
int main()
{
    float mile,Km;
    printf("donner moi la valeur du Km :");
    scanf("%f",&Km);
    mile = (Km*1.609);
    printf("la valeur du mile est %f",mile);
    return 0;
}