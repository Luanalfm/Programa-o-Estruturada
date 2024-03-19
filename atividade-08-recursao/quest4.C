#include <stdio.h>

void imprimirCrescente(int n) {
    if (n == 0) {
        return;
    }
    imprimirCrescente(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Os numeros naturais de 0 ate %d em ordem crescente sao:\n", n);
    imprimirCrescente(n);
    printf("\n");
    return 0;
}
