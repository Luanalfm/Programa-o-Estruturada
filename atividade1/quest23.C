#include <stdio.h>

int main() {
    float numero_decimal;
    int numero_inteiro;

    printf("digite um número decimal: ");
    scanf("%f", &numero_decimal);

    numero_inteiro = (int)numero_decimal;

    printf("O número inteiro equivalente é: %d\n", numero_inteiro);

    return 0;
}
