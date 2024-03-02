#include <stdio.h>
#include <stdlib.h>

int main() {
    char idade_txt[100];
    int idade;
    printf("Digite sua idade: \n");
    scanf("%s",idade_txt);
    idade = atoi(idade_txt);
    printf("Idade convertida para inteiro:, %d!\n", idade);
    return 0;
    
}