#include <stdio.h>

int somatorio(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + somatorio(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }
    printf("O somatorio de 1 ate %d: %d\n", n, somatorio(n));
    return 0;
}
