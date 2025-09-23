#include <stdio.h>

#define PI 3.14159265359

int main(void) {
    double rayon;

    printf("Quelle est la taille du rayon du cercle dont vous voulez connaitre la circonférence ? ");
    scanf("%lf", &rayon);

    printf("La circonférence du cercle vaut: %lf\n", 2 * rayon * PI);

    return 0;
}