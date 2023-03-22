// Exercice 1 :
// Dans cet exercice, demandez à l’utilisateur d’entrer un caractère et ensuite affichez son contenu, sa
// taille en mémoire et son adresse.

#include <stdio.h>


int main (){

    char caractere;
    char* p_caractere;

    p_caractere = &caractere;

    printf("Veuillez choisir un caractere: ");
    scanf("%c", &caractere);

    printf("Contenu : %c\nTaille en memoire: %d\nAdresse: %p", caractere, sizeof(caractere), *p_caractere);
    
    return 0;

}
