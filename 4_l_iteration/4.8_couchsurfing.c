#include <stdio.h>

int main(void) {
    int nombre_semaines, hommes, femmes;
    double pourcentage_hommes, pourcentage_femmes;

    // TODO: récupérer le nombre de semaines

    hommes = 0;
    femmes = 0;

    for (int semaine = 0; semaine < nombre_semaines; semaine++) {
        // TODO : récupérer le genre de chaque semaine (attention au mauvais format de remplissage du genre!)
    }

    // TODO: calculer le pourcentage de présence pour chaque genre

    printf("Tu as hébergé %.2lf%% d'hommes et %.2lf%% de filles sur les %d dernières semaines.\n",
        pourcentage_hommes, pourcentage_femmes, nombre_semaines);

    return 0;
}