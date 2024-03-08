#include <stdio.h>

int main(){

    char ch;
    printf("Digite um simbolo de pontuação: ");
    ch=getchar();

    switch (ch) {
        case '.':
            printf("Ponto.\n"); break;

        case ',':
            printf("Virgula.\n"); break;

        case ':':
            printf("Dois pontos.\n"); break;

        case ';':
            printf("Ponto e vicgula.\n"); break;

        default:
            printf("Não e pontuação!\n");
    }

    return 0;
}