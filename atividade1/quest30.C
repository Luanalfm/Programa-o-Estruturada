#include <stdio.h>

int main() {
    int numero;

    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    int dobro = numero * 2;

    printf("O dobro de %d é %d.\n", numero, dobro);

    return 0;
}
