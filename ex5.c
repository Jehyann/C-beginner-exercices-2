// Exercice 5 :
// Créer un tableau de 1000 lettres, écrite en majuscule et rempli aléatoirement. Demandez à
// l’utilisateur de saisir une lettre. Affichez si la lettre est présente. Si c’est le cas, affichez le nombre
// d’occurrences. Afficher le nombre d’occurrences de chaque lettre de l’alphabet contenu dans ce
// tableau.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    // MAKE TAB/ARRAY
    char tab[1000];
    int length = 1000;
    srand(time(NULL)); 
    for (int i = 0; i < length; i++) {
        tab[i] = rand() % 26 + 'A'; 
    }

    // GET LETTER
    char letter;
    printf("\nPlease insert a capital letter : ");
    scanf("%c", &letter);

    // FIND LETTER
    int occ = 0;
    for (int i = 0; i < length; i++) {
        if (tab[i] == letter) {
            occ++;
        }
    }

    // GIVE RESULT OF OCCURENCE
    if (occ == 0) {
        printf("\nThe letter %c does not occur in the array.\n\n", letter);
    } else {
        printf("\nThe letter %c occurs %d times in the array.\n\n", letter, occ);
    }

    // FIND OCCURENCE OF EACH LETTER
    int occ_l[26] = {0};
    for (int i = 0; i < length; i++) {
        occ_l[tab[i] - 'A']++;
    }

    // GIVE OCCURENCE OF EACH LETTER
    for (int i = 0; i < 26; i++) {
        printf("%c : %d\n", i + 'A', occ_l[i]);
    }

    return 0;
}