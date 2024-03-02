#include <stdio.h>

int main() {
    float numero1, numero2, resto;

    printf("digite o primeiro número decimal: ");
    scanf("%f", &numero1);
    printf("digite o segundo número decimal: ");
    scanf("%f", &numero2);

    resto = numero1 - (int)(numero1 / numero2) * numero2;

    printf("O resto da divisão entre %.2f e %.2f é: %.2f\n", numero1, numero2, resto);

    return 0;
}
