#include <stdio.h>

int main() {
    float numero, quadrado;
    printf("Por favor, digite um número decimal: ");
    scanf("%f", &numero);
    quadrado = numero * numero;
    printf("O quadrado de %.2f: %.2f\n", numero, quadrado);
    return 0;
}
