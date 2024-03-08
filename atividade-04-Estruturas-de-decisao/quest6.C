
#include <stdio.h>

int main(){

    int n;
    printf("Digite um numeros: ");
    scanf("%d",&n);

    if (n%2==0){
        printf("O numero é par!\n");
    }
    else{
        printf("Ele é ímpar!\n");
    }

    return 0;
}