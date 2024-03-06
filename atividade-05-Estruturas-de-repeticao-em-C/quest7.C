#include <stdio.h>

int main() {
    int numero, numero_invertido = 0, digito;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        numero_invertido = numero_invertido * 10 + digito;
        numero /= 10;
    }

    printf("O numero invertido e: %d\n", numero_invertido);

    return 0;
}
