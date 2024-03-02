#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, perimetro;

    printf("Por favor, digite o raio da circunferência: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;

    printf("O perímetro da circunferência é: %.2f\n", perimetro);

    return 0;
}
