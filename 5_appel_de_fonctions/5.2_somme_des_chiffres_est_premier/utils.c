#include "utils.h"

#include <stdbool.h>

bool est_premier(int nb) {
    int i = 2;

    while (nb > 1 && nb % i != 0) {
        i++;
    }

    return nb == i;
}

int somme_chiffres(int nb) {
    int somme = 0;

    while (nb > 0) {
        somme += nb % 10;
        nb = nb / 10;
    }

    return somme;
}
