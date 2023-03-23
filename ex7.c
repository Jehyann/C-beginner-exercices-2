// Exercice 7 :
// Créer une matrice unitaire de niveau 4. Une matrice unitaire est une matrice ayant des 1 sur sa
// diagonale. Réalisez l’affichage sur 4 lignes et 4 colonnes.

#include <stdio.h>

int main() {
    // MATRIX ARRAY
    int matrix[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    // PRINT MATRIX ARRAY
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}