#include <stdio.h>


int somaDobro(int a, int b) {
    a *= 2;
    b *= 2;
    return a + b;
}

int main() {

    int num1, num2;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &num1, &num2);
    int resultado = somaDobro(num1, num2);
    printf("A soma dos dobro dos numeros e: %d\n", resultado);

    return 0;
}
