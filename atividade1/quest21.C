#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cidade[50];
    char letra_inicial;

    printf("digite o nome da sua cidade: ");
    scanf("%s", cidade);

    letra_inicial = tolower(cidade[0]);

    if (letra_inicial == 's') {
        printf("O nome da cidade começa com a letra 'S'.\n");
    } else {
        printf("O nome da cidade não começa com a letra 'S'.\n");
    }

    return 0;
}
