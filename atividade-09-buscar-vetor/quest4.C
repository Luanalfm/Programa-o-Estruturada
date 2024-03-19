#include <stdio.h>

int main() {
    int vetor[5];
    int i, maior, menor, posicao_maior, posicao_menor;

    printf("Insira 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    posicao_maior = 0;
    posicao_menor = 0;

    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }

    printf("O maior valor e %d e esta na posicao %d.\n", maior, posicao_maior);
    printf("O menor valor e %d e esta na posicao %d.\n", menor, posicao_menor);

    return 0;
}
