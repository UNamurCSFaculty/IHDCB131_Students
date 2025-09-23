#include <stdio.h>

int main(void) {
    float c1, c2, c3, c4;

    printf("Entrez la taille de quatre côtés: ");
    scanf("%f", &c1);
    scanf("%f", &c2);
    scanf("%f", &c3);
    scanf("%f", &c4);

    if (c1 <= 0 || c2 <= 0 || c3 <= 0 || c4 <= 0) {
        printf("Une taille de côté doit être strictement positive !\n");
    } else if (c1 + c2 + c3 <= c4 || c1 + c2 + c4 <= c3 || c1 + c3 + c4 <= c2 || c2 + c3 + c4 <= c1) {
        //La taille du plus grand côté doit être plus petite que la sommme de la
        //taille des trois autres côtés !
        printf("Il est impossible de construire un quadrilatère avec ces tailles de côté !\n");
    } else if (c1 == c2 && c2 == c3 && c3 == c4) {
        printf("C'est un losange...ou un carré !\n");
    } else if ((c1 == c2 && c3 == c4) || (c1 == c3 && c2 == c4) || (c1 == c4 && c2 == c3)) {
        printf("C'est un parallélogramme, un cerf-volant ou un rectangle !\n");
    } else if (c1 == c2 || c1 == c3 || c1 == c4 || c2 == c3 || c2 == c4 || c3 == c4) {
        printf("Ça pourrait être un trapèze isoscèle...qui sait ?\n");
    } else {
        printf("C'est un quadrilatère quelconque.\n");
    }

    return 0;
}