#include <stdio.h>
int main()
{
    float F,C;
    printf("donner moi la valeur de F :");
    scanf("%f",&F);
    C=(F-32)/1.8;
    
    
    if (-20 < C && C < 0)
    {
    printf("la valeur de C est %.2f",C);
    printf("la temperature est tres froide");
    }
    else if (1 < C && C < 24)
    {
    printf("la valeur de C est %.2f",C);
    printf("la temperature est froide");
    }
    
    else if (25 < C && C < 35)
    {
     printf("la valeur de C est %.2f",C);
     printf("la temperature est chaude");
    }
    
    else if (35 < C && C < 60)
    {
    printf("la valeur de C est %.2f",C);
    printf("la temperature est tres chaude");
    }
    return 0;


}