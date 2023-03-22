// Exercice 2 :
// Créer une saisie, ainsi qu’un pointeur. Faire en sorte d’utiliser le pointeur pour faire une saisie
// utilisateur. Affichez le contenu de la saisie utilisateur et l’adresse à laquelle cette information est
// stockée.

#include <stdio.h>


int main (){

    char saisie;
    char* p_saisie;

    p_saisie = &saisie;

    printf("Veuillez choisir un saisie: ");
    scanf("%c", p_saisie);

    printf("Contenu : %c\nAdresse: %p", saisie, *p_saisie);
    
    return 0;

}