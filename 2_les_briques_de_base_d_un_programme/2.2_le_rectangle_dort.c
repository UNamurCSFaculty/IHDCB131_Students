#include <stdio.h>

#define PI 3.14159265359

int main(void) {
    float rayon;

    printf("Quelle est la taille du rayon du cercle dont vous voulez connaitre la circonférence ? ");
    scanf("%f", &rayon);

    printf("La circonférence du cercle vaut: %f\n", 2 * rayon * PI);

    return 0;
}