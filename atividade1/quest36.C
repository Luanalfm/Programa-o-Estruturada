#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("digite o primeiro número decimal: ");
    scanf("%f", &num1);
    printf("digite o segundo número decimal: ");
    scanf("%f", &num2);
    printf("digite o terceiro número decimal: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética dos três números é: %.2f\n", media);

    return 0;
}
