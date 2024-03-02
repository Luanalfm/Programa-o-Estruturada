#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[100];
    printf("Seu nome: ");
    scanf("%s",nome);
    printf("Bem-vindo, %s!\n", nome);

    return 0;
}
