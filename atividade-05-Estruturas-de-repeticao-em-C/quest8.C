#include <stdio.h>


int main(){
    //iniciando as variaveis com 1 e 0 para evitar erro indefinido dnv
    int n = 1;
    int soma = 0;

    while (n <=100) {
        soma += n;
        n++;
        

    }
    printf("A soma dos numeros de 1 a 100 e: %d", soma);

    return 0;

}