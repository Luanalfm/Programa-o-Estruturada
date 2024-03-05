#include <stdio.h>

int main() {
    float valor_em_metros;
    int opcao;

    // Solicita ao usuário que insira o valor em metros
    printf("Insira o valor em metros: ");
    scanf("%f", &valor_em_metros);

    // Menu de opções
    printf("Escolha a opcao de conversao:\n");
    printf("1 - Centimetros\n");
    printf("2 - Milimetros\n");
    printf("3 - Quilometros\n");
    printf("Insira o numero: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("%.2f metros equivalem a %.2f centimetros.\n", valor_em_metros, valor_em_metros * 100);
            break;
        case 2: 
            printf("%.2f metros equivalem a %.2f milimetros.\n", valor_em_metros, valor_em_metros * 1000);
            break;
        case 3: 
            printf("%.2f metros equivalem a %.6f quilometros.\n", valor_em_metros, valor_em_metros / 1000);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
