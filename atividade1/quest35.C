#include <stdio.h>

int main() {
    float base, altura, perimetro;

    printf("digite a base do retângulo: ");
    scanf("%f", &base);

    printf("digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);

    printf("O perímetro do retângulo é: %.2f\n", perimetro);

    return 0;
}
