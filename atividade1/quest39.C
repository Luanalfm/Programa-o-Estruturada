#include <stdio.h>
#include <math.h>

int main() {
    float numero_decimal;
    int numero_inteiro;

    printf("digite um número decimal: ");
    scanf("%f", &numero_decimal);

    numero_inteiro = round(numero_decimal);

    printf("O número arredondado é: %d\n", numero_inteiro);

    return 0;
}
