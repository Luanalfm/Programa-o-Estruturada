#include <stdio.h>

int main(){

    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    if (n>0){
        printf("O numero é positivo\n");
    }
    else if (n==0){
        printf("O numero é igual a 0\n");
    }
    else{
        printf("O numero é negativo\n");
    }

    return 0;
}