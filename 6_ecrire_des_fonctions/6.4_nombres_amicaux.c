#include <stdio.h>
#include <stdbool.h>

// TODO: définir une fonction "somme_diviseurs" qui calcule la somme des diviseurs d'un nombre et qui sera appelée dans la fonction "are_friends"

// PRE: nb1 et nb2 sont des entiers positifs
// POST: Si nb1 et nb2 sont amicaux, retourne true. Sinon, retourne false
bool are_friends(int nb1, int nb2) {
    // TODO: calculer si les nombres sont amicaux ou pas
}

int main(void) {
    int nb1, nb2;
    bool number_are_friends;

    // TODO: récupérer les deux nombres encodés par l'utilisateur

    // TODO: calculer si les deux nombres sont amicaux ou pas

    if (number_are_friends) {
        printf("%d et %d sont des nombres amicaux\n", nb1, nb2);
    } else {
        printf("%d et %d ne sont pas des nombres amicaux\n", nb1, nb2);
    }

    return 0;
}