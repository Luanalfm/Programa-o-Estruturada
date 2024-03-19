#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }
    printf("O fatorial de %d: %d\n", n, fatorial(n));
    return 0;
}
