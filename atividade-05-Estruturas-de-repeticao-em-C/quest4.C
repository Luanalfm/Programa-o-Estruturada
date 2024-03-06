#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura,soma_alt= 0,media;
    
    for (int i = 0; i < 6; i++) {
        printf("Qual o valor da altura deseja adicionar para calculo da media? \n"); 
        scanf("%f",&altura);
        soma_alt +=altura;

    }

    media = soma_alt/6;

    printf("media das alturas: %.2f",media);

    return 0;

}