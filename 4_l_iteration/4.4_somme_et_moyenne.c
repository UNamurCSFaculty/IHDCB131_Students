#include <stdio.h>

int main(void) {
    double average, sum, nbr;
    int number_of_numbers;

    // PRE: /

    // TODO: Initialisation - initialiser les variables

    // INV: sum contient la somme des nombres entrés pour le moment,
    //      number_of_numbers contient le nombre de nombres entrés pour le moment,
    //      nbr contient le dernier nombre entré et si nbr est positif,
    //      cela signifie qu’il est le dernier nombre inclus dans la somme

    // TODO: Boucle - récupérer les nombres entrés et calculer leur somme

    // TODO: Clôture - calculer la moyenne

    // POST: sum contient la somme des nombres entrés,
    //       number_of_numbers contient le nombre de nombres entrés et
    //       average contient la moyenne des nombres entrés

    printf("La somme des nombres entrés est : %.2f\n", sum);
    printf("La moyenne des nombres entrés est : %.2f\n", average);

    return 0;
}