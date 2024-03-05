#include <stdio.h>
#include <stdbool.h>

int main() {
    char nome[50];
    int idade;
    bool entrada_valida = false;

    while (!entrada_valida) {
        printf("Insira seu nome: ");
        scanf("%s", nome);

        printf("Insira sua idade: ");
        if (scanf("%d", &idade) == 1) {
            entrada_valida = true; 
        } else {
            while (getchar() != '\n'); 
            printf("valor inteiro invalido para a idade.\n");
        }
    }


    switch (idade) {
        case 0:
        case 1:
            printf("%s,bebe.\n", nome);
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            printf("%s,crianca.\n", nome);
            break;
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            printf("%s,adolescente.\n", nome);
            break;
        default:
            printf("%s,Adulto.\n", nome);
            break;
    }

    return 0;
}
