#include <stdio.h>
#include <string.h>

int main() {
    char primeiro_nome[50], sobrenome[50], nome_completo[100];


    printf("digite seu primeiro nome: ");
    scanf("%s", primeiro_nome);

    printf("digite seu sobrenome: ");
    scanf("%s", sobrenome);


    strcpy(nome_completo, primeiro_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);

    printf("Seu nome completo: %s\n", nome_completo);

    return 0;
}
