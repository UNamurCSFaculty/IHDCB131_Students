#include <stdio.h>

#include "compatibilite.h"

int main(void) {
    char lettre;
    int somme = 0;
    printf("Prénom 1:\n");
    do {
        scanf(" %c", &lettre);
        if (lettre >= 'a' && lettre <= 'z') {
            somme += vers_nombre(lettre);
        }
    } while (lettre >= 'a' && lettre <= 'z');

    printf("%d\n", somme);

    return 0;
}