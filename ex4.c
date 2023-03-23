// Exercice 4 :
// Créer un tableau de 5 entiers. Affichez les 5 valeurs de ce tableau et ensuite afficher les valeurs dans
// l’ordre inverse.
// Pour chacune des cases, affichez le contenu, l’adresse et la taille en mémoire ainsi que son index.
// Faire la même chose en utilisant la syntaxe par les pointeurs.
// Afficher la moyenne, le maximum et le minimum de ce tableau

#include <stdio.h>


int main (){

    int tab[5] = {1, 8, 6, 2, 5};
    int *p_tab;
    int length = sizeof(tab)/sizeof(tab[0]);

    p_tab = &tab[5 - 1];



    //show table
    printf("\nNumbers inside the tab : ");
    for (int i = 0; i < length; i++) {
        printf("%d", tab[i]);
    }

    // show table backwards
    printf("\nNumbers inside the tab (backwards) : ");
    for (int i = 0; i < length; i++) {
        printf("%d", *p_tab--);
    }
    printf("\n");






    // show adress
    for(int i = 0; i < length; i++) {
        printf("\nThe adress of %d is %p.", tab[i], &tab[i]);
    }
    printf("\n");

    // show memory size
    for(int i = 0; i < length; i++) {
        printf("\nThe size of %d is %d.", tab[i], sizeof(tab[i]));
    }
    printf("\n");

    // show index
    for(int i = 0; i < length; i++) {
        printf("\nThe index of %d is %d.", tab[i], i);
    }
    printf("\n");






    // show average
    int sum, i;
    int avg;

    for(int i = 0; i < length; i++) {
      sum = sum + tab[i];
    }
    avg = (int)sum / length;
    printf("\n\nAverage of table: %d\n", avg);  



    // show minimum
    int min = tab[0];

    for (int i = 0; i < length; i++) {     
        // the sign here compare 
        // (thats why it is the only changes between min and max)   
       if(tab[i] < min)    
           min = tab[i];    
    }      
    printf("Smallest number in table: %d\n", min);



    // show maximum
    int max = tab[4];
    
    for (int i = 0; i < length; i++) {
       if(tab[i] > max)    
           max = tab[i];    
    }      
    printf("Biggest number in table: %d\n", max);


    return 0;
}