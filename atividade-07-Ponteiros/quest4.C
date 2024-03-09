#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    trocarValores(&num1, &num2);

    printf("Valores após a troca:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}
