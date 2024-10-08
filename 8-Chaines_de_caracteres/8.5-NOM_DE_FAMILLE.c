#include <stdio.h>

// PRE: tableau est un tableau initialisé et taille est la taille de tableau
// POST: affiche le contenu de tableau sous la forme [x1 x2 x3 ... xn]
void print_tab(int tableau[], int taille) {
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%i ", tableau[i]);
    }
    printf("]\n");
}

// PRE: str est une chaine de caractère (se termine par '\0') initialisée
// POST: renvoie la taille de str (le nombre de caractères avant '\0')
int str_length(char* str) {
    // TODO: à compléter
}

// PRE: str  et score ont la même taille, str est une chaine de caractère (donc se termine par '\0'), ce sont des tableaux initialisés.
// POST: remplit score avec les valeurs correspondants aux lettres de str (de 1 à 9)
int letters_to_val(char* str, int* score) {
    int i = 0;

    while (*str) {
        score[i] = ((*str)-'a') % 9 + 1;
        i++;
        str++;
    }

    return i;
}

// PRE: taille est la taille de chiffresIn et chiffresIn est un tableau initialisé, chiffresOut aussi
//      la taille de chiffresOut est la moitie de celle de chiffresIn (si taille est pair) ou la moitie arrondie superieur sinon
// POST: chiffresOut est rempli de la somme des chiffres deux à deux de chiffresIn, en laissant le dernier intact (si chiffresIn est impair)
// Exemple: chiffresIn = 1,2,5,9,3,4,2; chiffreOut = 3,14,7,2
void add_two_digits(int* chiffresIn, int taille, int* chiffresOut) {
    // TODO: à compléter
}

// PRE: numbers est un tableau initialisé contenant des nombres de 0 à 18
//      taille est la taille de numbers
// POST: tous les nombres de numbers contenant deux chiffres sont remplacés
//       par la somme de leurs chiffres. Les autres sont inchangés
void numbers_to_digits(int* numbers, int taille) {
    // TODO: à completer
}

// PRE: prenom est une chaine de caractères initialisée et non vide
// POST: renvoie la valeur numérologique de prenom telle que présentée
//       par l'algorithme de http://compatibilite-prenoms.fr/description-algorithme-numerologie.php
int score(char* prenom) {
    int taille;
    int score[str_length(prenom)];

    // Transformation de chaque lettre du prenom en chiffre de 1 à 9, et copie de ces chiffres dans score
    // taille = la taille de score
    taille = letters_to_val(prenom, score);

    while (taille > 1) {
        // Taille du tableau contenant le prochain score
        int taille_new;

        if (taille % 2 == 0) {
            taille_new = taille / 2;
        } else {
            taille_new = (taille - 1) / 2 + 1;
        }

        // Tableau contenant le prochain score
        int score_new[taille_new];

        // Addition des chiffres de score 2 à 2.  Copie du résultat dans score_new
        add_two_digits(score, taille, score_new);

        // Transformation des nombres de score_new en chiffres de 1 à 9
        numbers_to_digits(score_new, taille_new);

        taille = taille_new;

        // Copie du contenu de score_new dans score
        for(int i = 0; i < taille_new; i++) {
            score[i] = score_new[i];
        }
    }

    return score[0];
}

// PRE: prenom1 et prenom2 sont des chaines de caractères initialisées
// POST: renvoie la compatibilité entre prenom1 et prenom2 selon l'algorithme présenté par http://compatibilite-prenoms.fr.
//       cette compatibilité est exprimée sous la forme d'une valeur réelle entre 0 et 1.
float compatibility(char* prenom1, char* prenom2) {
    // TODO: à compléter
}

int main(void) {
    char* prenom1;
    char* prenom2;

    printf("Entrez un premier prénom: ");
    scanf(" %ms", &prenom1);

    printf("Entrez un second prénom: ");
    scanf(" %ms", &prenom2);

    //TODO: à compléter

    return 0;
}
