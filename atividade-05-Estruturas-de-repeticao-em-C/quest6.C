#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            soma += digito;
        }
        numero /= 10;
    }

    printf("A soma dos digitos pares do numero e: %d\n", soma);

    return 0;
}
