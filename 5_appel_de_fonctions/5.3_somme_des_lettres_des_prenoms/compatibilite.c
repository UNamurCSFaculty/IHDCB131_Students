#include "compatibilite.h"

char vers_lettre(int nb) { return (char) ('a' + nb); }

int vers_nombre(char c) { return c - (int) 'a'; }

int abs(int n) {
    if (n < 0) {
        n = -n;
    }
    return n;
}

int somme_chiffres(int nb) {
    int somme = 0;
    while (nb > 0) {
        somme += nb % 10;
        nb = nb / 10;
    }
    return somme;
}
