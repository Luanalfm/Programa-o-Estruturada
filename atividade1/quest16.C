#include <stdio.h>

int main() {
    int numero1, numero2;

 
    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("O maior número e: %d\n", numero1);
    } else if (numero2 > numero1) {
        printf("O maior número e: %d\n", numero2);
    } else {
        printf("Os números sao iguais: %d\n", numero1);
    }

    return 0;
}
