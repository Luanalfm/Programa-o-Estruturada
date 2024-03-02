#include <stdio.h>

int main() {
    int n1, n2, n3, resultado;

    printf("digite o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("digite o segundo número inteiro: ");
    scanf("%d", &n2);
    printf("digite o terceiro número inteiro: ");
    scanf("%d", &n3);

    resultado = (n1 + n2) * n3;

    printf("O resultado da operação é: %d\n", resultado);

    return 0;
}
