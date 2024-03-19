#include <stdio.h>

int main() {
    int vetor[10];
    int i, menor;

    printf("Insira os elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor elemento do vetor e: %d\n", menor);

    return 0;
}
