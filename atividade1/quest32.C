#include <stdio.h>

int main() {
    int num1, num2;
    int soma, diferenca, produto, quociente;

    printf("digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    quociente = num1 / num2;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente (divisão inteira): %d\n", quociente);

    return 0;
}
