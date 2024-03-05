#include <stdio.h>

int main() {
    int numero1, numero2, operacao;
    float resultado;

    printf("Insira o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("Insira o segundo numero inteiro: ");
    scanf("%d", &numero2);


    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Insira o numero da operacao desejada: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if (numero2 != 0) {
                resultado = (float)numero1 / numero2;
                printf("Resultado da divisao: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero.\n");
            }
            break;
        default:
            printf("Operação invalida.\n");
            break;
    }

    return 0;
}
