#include <stdio.h>

int main() {
    int numero;


    printf("digite um número inteiro: ");
    scanf("%d", &numero);


    if (numero > 0) {
        printf("%d e um numero positivo.\n", numero);
    } else if (numero < 0) {
        printf("%d e um numero negativo.\n", numero);
    } else {
        printf("O numero digitado e zero.\n");
    }

    return 0;
}
