#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("Os divisores de %d são:\n", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
