#include <stdio.h>

#define INFINITY 10

int main(void) {
    // Estimation de la valeur de e: Somme_{n=0}^INFINI 1/n!
    double e = 0;
    int n = 0;
    while (n < INFINITY) {
        int fact_n = 1;
        int i;
        for (i = 1; i <= n; i++) {
            fact_n *= i;
        }
        e += 1.0 / fact_n;
        n++;
    }
    printf("La valeur de e est %lf\n", e);

    // Nombre de podiums de 3 athlètes possibles parmi n: n!/(n-3)!
    int athletes;
    printf("Combien y a-t-il d'athlètes en compétition ?\n");
    scanf("%d", &athletes);
    int fact_athletes = 1;
    int fact_athletes_moins = 1;
    if (athletes >= 3) {
        int i;
        for (i = 1; i <= athletes; i++) {
            fact_athletes *= i;
        }
        for (i = 1; i <= athletes - 3; i++) {
            fact_athletes_moins *= i;
        }
        printf("Nombre de podiums possibles: %d\n", fact_athletes / fact_athletes_moins);
    } else {
        printf("Pas assez d'athlètes pour remplir le podium !\n");
    }

    return 0;
}