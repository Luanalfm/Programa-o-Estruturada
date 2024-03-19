#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Digite o valor de N para calcular o termo da sequencia de Fibonacci: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }
    printf("O %d-esimo termo da sequencia de Fibonacci: %d\n", n, fibonacci(n));
    return 0;
}
