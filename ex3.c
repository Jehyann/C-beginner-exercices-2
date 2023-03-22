// Exercice 3 :
// Corrigez le code suivant afin qu’il n’y ait plus de crash.
// int age = 23;
// int* pointeur_age;
// print("Quel est votre age ?");
// scanf("%d", pointeur_age);
// printf("vous avez %d ans \n", age);


#include <stdio.h>


int main (){

    int age = 0;
    int* pointeur_age;

    printf("Quel est votre age ?");
    scanf("%d", &age);

    printf("vous avez %d ans \n", age);
    

    return 0;
}