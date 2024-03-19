#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int tem_igual = 0; 

    printf("Insira 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Valores iguais encontrados: %d e %d\n", vetor[i], vetor[j]);
                tem_igual = 1; 
            }
        }
    }

    if (!tem_igual) {
        printf("Nao foram encontrados valores iguais no vetor.\n");
    }

    return 0;
}
