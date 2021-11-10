# include <stdio.h>
int main()
{
    char nom[50];
    char prenom[99];
    int age;
    char sexe[99];
    printf("donner votre 
nom");
    scanf("%s",&nom);
    printf("donner votre prenom");
    scanf("%s",&prenom);
    printf("donner votre age");
    scanf("%d",&age);
    printf("donner votre sexe");
    scanf("%s",&sexe);
    printf("votre nom est %s");
    printf("votre prenom est %s");
    printf("votre age est %d");
    printf("votre sexe est %s");
    return 0;
}