#include <stdio.h>
#include <string.h>

int main(){

    char pessoa1[20],pessoa2[20];

    printf("Digite seu nome: ");
    scanf("%s",pessoa1);

    printf("Digite o nome do seu amigo: ");
    scanf("%s",pessoa2);

    if (strlen(pessoa1)> strlen(pessoa2)){
        printf("Seu nome possui mais caracteres.\n");
    }
    else if(strlen(pessoa2)> strlen(pessoa1)){
        printf("O nome do seu amigo possui mais caracteres.\n");
    }
    else{
        printf("Possui a mesma quantidade.\n");
    }

    return 0;
}