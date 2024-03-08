#include <stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while(numero != 0) {
        digito = numero % 10;

        soma += digito;

        numero /= 10;
    }

    printf("A soma dos dígitos elevados ao cubo é: %d\n", soma*soma*soma);

    return 0;
}