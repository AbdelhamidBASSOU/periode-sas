#include<stdio.h>
#include<math.h>
int main()
    {
        int a,b;
        printf("donner la valeur de a :");
        scanf("%d",&a);
        printf("donner la valeur de b :");
        scanf("%d",&b);
        if (a!=b || a<b)
        printf("%d\t%d",b,a);
        else
        printf("%d\t%d",a,b);
        return 0;

    }
