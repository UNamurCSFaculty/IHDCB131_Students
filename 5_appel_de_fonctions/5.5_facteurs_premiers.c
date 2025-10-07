#include <stdbool.h>
#include <stdio.h>

// PRE: nb est un nombre entier
// POST: si nb est premier, retourne true. Sinon, retourne false
bool est_premier(int nb) {
    int i = 2;

    while (nb > 1 && nb % i != 0) {
        i++;
    }

    return nb == i;
}

// PRE: a et b sont des entiers
// POST: pgcd contient le PGCD de a et b
int pgcd(int a, int b) {
    int pgcd;

    // TODO: calculer le PGCD en décomposant en facteurs premiers

    return pgcd;
}

// PRE: a et b sont des entiers
// POST: ppcm contient le PPCM entre a et b
int ppcm(int a, int b) {
    int ppcm;

    // TODO: calculer le PPCM entre a et b

    return ppcm;
}

int main(void) {
    int nb1, nb2, pgcd_result, ppcm_result;

    // TODO: récupérer les deux nombres encodés par l'utilisateur

    // TODO: calculer le PGCD et le PPCM de ces deux nombres en faisant des appels de fonctions

    printf("Le PGCD de %d et %d est %d\n", nb1, nb2, pgcd_result);
    printf("Le PPCM de %d et %d est %d\n", nb1, nb2, ppcm_result);

    return 0;
}