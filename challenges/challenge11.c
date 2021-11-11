#include <stdio.h>
int main()
 {
   float L,l;
   float cir;
   printf("entrez la valeur du Longueur :");
   scanf("%f",&L);
   printf("entrez la valeur du largeur :");
   scanf("%f",&l);
   cir=2*(l+L);
   printf(" la circonférence du rectangle est : cir=%f",cir);
   

    return 0;
}