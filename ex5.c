// Exercice 5 :
// Créer un tableau de 1000 lettres, écrite en majuscule et rempli aléatoirement. Demandez à
// l’utilisateur de saisir une lettre. Affichez si la lettre est présente. Si c’est le cas, affichez le nombre
// d’occurrences. Afficher le nombre d’occurrences de chaque lettre de l’alphabet contenu dans ce
// tableau.

#include <stdio.h>
#include <stdlib.h>



int main (){

    char randomletter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random ()];

    char tab [1000] = {randomletter};

    for (int i = 0; i<100; i++) {
        printf("%d", i);
    }

    return 0;
}