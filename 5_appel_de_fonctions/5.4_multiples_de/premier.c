#include "premier.h"

#include <stdbool.h>

int nombre_chiffres_div(int nb, int div) {
    int nombre = 0;

    while (nb > 0) {
        if ((nb % 10) % div == 0) {
            nombre++;
        }
        nb = nb / 10;
    }

    return nombre;
}

bool est_premier(int nb) {
    int i = 2;

    while (nb > 1 && nb % i != 0) {
        i++;
    }

    return nb == i;
}
