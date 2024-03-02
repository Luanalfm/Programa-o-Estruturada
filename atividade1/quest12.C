#include <stdio.h>
#include <string.h>

int main() {

    char nome[50], sobrenome[50];

    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("digite seu sobrenome: ");
    scanf("%s", sobrenome);


    printf("Nome completo invertido: %s, %s\n", sobrenome, nome);

    return 0;
}
