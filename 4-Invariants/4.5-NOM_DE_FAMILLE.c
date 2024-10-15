#include <stdio.h>

int main(void) {
    int number_notes, max_length, number_of_change;
    double max_note;

    // TODO: récupérer le nombre de notes que l'utilisateur va encoder

    int length[number_notes];
    double notes[number_notes];

    printf("Entrez successivement la fréquence et la durée de chaque note :\n");

    // Récupération de chaque note et sa durée correspondante et stockage des valeurs dans les tableaux notes et length
    for (int i = 0; i < number_notes; i++) {
        scanf("%lf %d", &notes[i], &length[i]);
    }


    // PRE: number_notes est un entier stockant le nombre de notes,
    //      notes est un tableau de valeurs réelles stockant les notes jouées et
    //      length est un tableau d'entiers stockant la durée des notes jouées

    // TODO: Initialisation - initialiser les variables

    // INV: TODO

    // TODO: Boucle - trouver la note jouée la plus longtemps ainsi que sa durée puis
    //                stocker ces valeurs dans max_note et max_length et
    //                calculer le nombre de changements de sens du mouvement mélodique

    // TODO: Clôture - à compléter si nécessaire

    // POST: la variable max_length contient la durée de la note qui a été jouée le plus longtemps,
    //       la variable max_note contient la note jouée le plus longtemps et
    //       la variable number_of_change contient le nombre de changements de sens du mouvement mélodique


    printf("Changements de sens: %d", number_of_change);
    printf("La note la plus longue est %f et a été jouée pendant %d ms", max_note, max_length);

    return 0;
}
