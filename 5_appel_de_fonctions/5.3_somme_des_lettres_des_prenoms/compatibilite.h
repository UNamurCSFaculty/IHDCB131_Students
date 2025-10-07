// PRE: 0 <= nb <= 25
// POST: renvoie la lettre de l'alphabet qui correspond au nombre entré (0->a, 1->b, ...)
char vers_lettre(int nb);

// PRE: c est une lettre minuscule entre 'a' et 'z'.
// POST: renvoie le nombre correspondant à cette lettre (a->0, b->1,...)
int vers_nombre(char c);

// PRE: /
// POST: renvoie la valeur absolue de n
int abs(int n);

// PRE: /
// POST: renvoie la somme des chiffres de nb
int somme_chiffres(int nb);
