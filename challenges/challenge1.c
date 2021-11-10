# include <stdio.h>
int main()
{
    char nom[20];
    char prenom[20];
    int age;
    char sexe[20];
    int num;
    printf("donner votre nom");
    scanf("%s",&nom);
    printf("donner votre prenom");
    scanf("%s",&prenom);
    printf("donner votre age");
    scanf("%d",&age);
    printf("donner votre sexe");
    scanf("%s",&sexe);
    printf("donner votre num");
    scanf("%d",&num);
    printf(" %s %s %d %s %d",nom,prenom,age,sexe,num);
   
    return 0;
}