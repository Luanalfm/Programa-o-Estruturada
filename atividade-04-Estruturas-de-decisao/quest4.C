#include <stdio.h>

int main(){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade>17){
        printf("Você é maior de idade!\n");
    }
    else{
        printf("Você é menor de idade!\n");
    }

    return 0;
}