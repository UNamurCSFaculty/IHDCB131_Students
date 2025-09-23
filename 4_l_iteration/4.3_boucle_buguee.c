#include <stdio.h>

int main(void) {
    int taille;
    scanf("%i", &taille);

    int i = 0;
    while (i <= taille) {
        printf("*");
    }

    return 0;
}