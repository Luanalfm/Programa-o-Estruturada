#include <stdio.h>
#include <limits.h> 

int main() {
    int numero, maior, menor;

   
    maior = INT_MIN; 
    menor = INT_MAX; 

    printf("Digite uma sequência de números inteiros (0 para parar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("O maior valor digitado foi: %d\n", maior);
    printf("O menor valor digitado foi: %d\n", menor);

    return 0;
}
