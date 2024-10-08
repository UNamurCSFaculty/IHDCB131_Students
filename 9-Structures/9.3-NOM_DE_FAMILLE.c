/*
Auteur: Cédric Libert
*/

#include <stdio.h>

#define MAX_CLIENTS 100

struct Client {
    char* name;
    char* city;
};

typedef struct Client Client;

int main(void) {
    Client clients[MAX_CLIENTS];
    char encoder;

    printf("Encoder un client (o/n) ? ");
    scanf(" %c", &encoder);

    int i = 0;
    while (encoder == 'o' && i < MAX_CLIENTS) {
        printf("Nom: ");
        scanf(" %ms", &clients[i].name);

        printf("Ville: ");
        scanf(" %ms", &clients[i].city);

        printf("Encoder un client (o/n) ? ");
        scanf(" %c", &encoder);

        i++;
    }

    for(int c = 0; c < i; c++) {
        printf("[%s (%s)]\n", clients[c].name, clients[c].city);
    }

    return 0;
}
