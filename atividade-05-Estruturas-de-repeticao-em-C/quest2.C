#include <stdlib.h>
#include <stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("A soma dos digitos do numero: %d\n", soma);

    return 0;
}