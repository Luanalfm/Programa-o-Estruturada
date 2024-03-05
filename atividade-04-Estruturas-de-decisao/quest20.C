#include <stdio.h>

int main() {
    char estado_civil;


    printf("Insira seu estado civil (s para solteiro, c para casado, d para divorciado, v para viuvo): ");
    scanf(" %c", &estado_civil);


    switch (estado_civil) {
        case 's':
        case 'S':
            printf("solteiro(a).\n");
            break;
        case 'c':
        case 'C':
            printf("casado(a).\n");
            break;
        case 'd':
        case 'D':
            printf("divorciado(a).\n");
            break;
        case 'v':
        case 'V':
            printf("viuvo(a).\n");
            break;
        default:
            printf("nao reconhecido.\n");
            break;
    }

    return 0;
}
