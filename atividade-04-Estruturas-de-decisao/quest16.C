#include <stdio.h>

int main() {
    int valor;


    printf("Insira um número inteiro de 1 a 5: ");
    scanf("%d", &valor);


    switch (valor) {
        case 5:
            printf("Muito bom\n");
            break;
        case 4:
            printf("Bom\n");
            break;
        case 3:
            printf("Regular\n");
            break;
        case 2:
            printf("Insuficiente\n");
            break;
        case 1:
            printf("Muito insuficiente\n");
            break;
        default:
            printf("Valor invalido\n");
            break;
    }

    return 0;
}
