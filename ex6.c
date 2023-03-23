// Exercice 6 :
// Créer un tableau de 10 éléments, contenant des chiffres de 0 à 9 généré aléatoirement.
// Effectuez un tri par sélection et affichez le résultat.
// Effectuez un tri à bulle et affichez le résultat.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tri_selection(){  
    // MAKE TAB/ARRAY
    int tab[10];
    srand(time(NULL)); 
    for (int i = 0; i<10; i++) {
        tab[i] = rand()%10;
    }

    int i, j, tmp, index;
 
   printf("\nList of 10 random numbers from 0 to 9 :\n");
    for (i=0; i < 10; ++i) {
      printf("%4d", tab[i]);
    }
 
    for (i=0; i < (10-1); i++) {
    index = i;
        for (j=i + 1; j < 10; j++) {
            if (tab[index] > tab[j])
            index = j;
        }
        if (index != i) {
        tmp = tab[i];
        tab[i] = tab[index];
        tab[index] = tmp;
        }
    }
 
    printf("\nList of the 10 numbers in scending order :\n");
    for (i=0; i < 10; i++)
        printf("%4d", tab[i]);
 
}

void tri_bulle(){
    // MAKE TAB/ARRAY
    int tab[10];
    srand(time(NULL)); 
    for (int i = 0; i<10; i++){
        tab[i] = rand()%10;
    }

    int i, j, tmp;
 
    printf("\nList of 10 random numbers from 0 to 9 :\n");
    for (i=0; i < 10; ++i) {
      printf("%4d", tab[i]);
    }
 
    for (i=0 ; i < 10-1; i++) {
        for (j=0 ; j < 10-i-1; j++){
            if (tab[j] > tab[j+1]) {
            tmp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = tmp;
            }
        }
    }
 
    printf("\nList of the 10 numbers in scending order :\n");
    for (i=0; i < 10; ++i) {
      printf("%4d", tab[i]);
    }
 
}


int main() {
    tri_selection();
    printf("\n\n");
    tri_bulle();
}