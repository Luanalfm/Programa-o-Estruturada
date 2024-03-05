#include <stdio.h>
#include <math.h>

int main() {
    float n_decimal;
    int n_inteiro;

    printf("Insira um numero decimal: ");
    scanf("%f", &n_decimal);

    if (n_decimal >= INT_MIN && n_decimal <= INT_MAX) {
        n_inteiro = round(n_decimal);
        printf("numero arredondado: %d\n", n_inteiro);
    } else {
        printf("Valor fora do intervalo permitido.\n");
    }

    return 0;
}
