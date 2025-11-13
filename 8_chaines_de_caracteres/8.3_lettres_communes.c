#include <stdbool.h>
#include <stdio.h>

#define MAX_WORD 100

// PRE: m1 et m2 sont des chaines de caractères
// POST: renvoie le nombre de lettres uniques communes dans m1 et m2
//       Par exemple, papillon et plume ont deux lettres uniques communes, p et l...
//       même si il y a plusieurs p et plusieurs l !
int common_letters(char m1[], char m2[]) {
    int i = 0;
    while (m1[i] != '\0') {
        int j = 0;
        while(m2[j] != '\0') {
            // TODO: à compléter
        }
    }
}

// PRE: TODO
// POST: TODO
bool are_equals(char word1[], char word2[]) {
    // TODO: à compléter
}

int main(void) {
    char m1[MAX_WORD];
    char m2[MAX_WORD];

    printf("Mot 1: ");
    scanf("%s", &m1);

    printf("Mot 2: ");
    scanf("%s", &m2);

    printf("Nombre de lettres communes: %i\n", common_letters(m1, m2));

    if (are_equals(m1, m2)) {
        printf("Les mots sont égaux.\n");
    } else {
        printf("Les mots ne sont pas égaux.\n");
    }

    return 0;
}