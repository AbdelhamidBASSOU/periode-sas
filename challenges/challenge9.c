#include <stdio.h>
#include <math.h>

int main()
{
   double x1,x2,y1,y2;
   int p; 
    
   printf("donnez moi la valeur de x1");
   scanf("%f",&x1);
   printf("donnez la valeur de y1");
   scanf("%f",&y1);
   printf("donnez moi la valeur de x2");
   scanf("%f",&x2);
   printf("donnez la valeur de y2 ");
   scanf("%f",&y2);
   p=sqrt(pow(x2-x1,2))+(pow(y2-y1,2));
   printf("la distance entre les deux points est %f",p);
  
   
    return 0;
}