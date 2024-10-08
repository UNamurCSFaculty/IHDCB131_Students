#include <stdio.h>

int main(void) {
    int nombreSemaines, hommes, femmes;
    double pourcentageHommes, pourcentageFemmes;

    // TODO: récupérer le nombre de semaines

    hommes = 0;
    femmes = 0;

    for (int semaine = 0; semaine < nombreSemaines; semaine++) {
        // TODO : récupérer le genre de chaque semaine (attention au mauvais format de remplissage du genre!)
    }

    // TODO: calculer le pourcentage de présence pour chaque genre

    printf("Tu as hébergé %.2lf%% d'hommes et %.2lf%% de filles sur les %d dernières semaines.\n",
           pourcentageHommes, pourcentageFemmes, nombreSemaines);

    return 0;
}
