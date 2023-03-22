// Exercice 4 :
// Créer un tableau de 5 entiers. Affichez les 5 valeurs de ce tableau et ensuite afficher les valeurs dans
// l’ordre inverse.
// Pour chacune des cases, affichez le contenu, l’adresse et la taille en mémoire ainsi que son index.
// Faire la même chose en utilisant la syntaxe par les pointeurs.
// Afficher la moyenne, le maximum et le minimum de ce tableau

#include <stdio.h>


int main (){

    int tab[5] = {1, 2, 3, 4, 5};
    int *p_tab;

    p_tab = &tab[5 - 1];

    
    for (int i = 0; i<5; i++) {
        printf("%d", *p_tab--);
    }
    

    return 0;
}