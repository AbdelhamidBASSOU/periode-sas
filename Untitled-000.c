#include<stdio.h>
#include<string.h>
typedef struct
{
    char CIN[10];
    char nom[20];
    char prenom[20];
    float montant;
}Compte;

int numC = 0 ;
void ajoute_client(Compte T[])
{
        int i= numC;
        printf("CIN     :");
        scanf("%s",T[i].CIN);
        printf("Nom     :");
        scanf("%s",T[i].nom);
        printf("Prenom  :");
        scanf("%s",T[i].prenom);
        printf("Montant :");
        scanf("%f",&T[i].montant);
        numC++;
}

void ajoute_plusieur_clients(Compte T[],int nbr)
{
    int i;
        printf("entrez le nombre des comptes bancaire");
        scanf("%d",&nbr);
        int c=1;
        for(i=numC;i<nbr+numC;i++)
    {
        printf("Copmte N%d: \n",c);c++;
        printf("CIN     :");
        scanf("%s",T[i].CIN);
        printf("Nom     :");
        scanf("%s",T[i].nom);
        printf("Prenom  :");
        scanf("%s",T[i].prenom);
        printf("Montant :");
        scanf("%f",&T[i].montant);
    }
    numC = numC + nbr;
}
int main ()
{
    int n  ,chose ;
    Compte T[n];
    int chose0,tri,a=1;
    while(a)
    {
        puts("                        Menu");
        puts("====================================================");
        puts("1) Ajouter un compte");
        puts("2) Ajouter plusieur compte");
        puts("====================================================");
        printf("entrez votre choix");
        scanf("%d",&a);
        int i = 1;
        switch(chose0)
        {
           case 1:
           ajoute_client(T);
           break;
           case 2:
           ajoute_plusieur_clients(T,n);
           break; 
        }
    }
    return 0;
}