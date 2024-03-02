#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("digite seu nome: ");
    scanf("%s", nome);

    if (strlen(nome) > 5) {
        printf("O nome %s contem mais de 5 caracteres.\n", nome);
    } else {
        printf("O nome %s nao contem mais de 5 caracteres.\n", nome);
    }

    return 0;
}
