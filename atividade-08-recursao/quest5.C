#include <stdio.h>

void imprimirDecrescente(int n) {
    if (n < 0) {
        return;
    }
    printf("%d ", n);
    imprimirDecrescente(n - 1);
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Os numeros naturais de 0 ate %d em ordem decrescente sao:\n", n);
    imprimirDecrescente(n);
    printf("\n");
    return 0;
}
