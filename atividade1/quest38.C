#include <stdio.h>

int main() {
    float valor_em_reais, cotacao_dolar, valor_em_dolares;

    printf("digite o valor em reais: ");
    scanf("%f", &valor_em_reais);

    printf("digite a cotação do dólar: ");
    scanf("%f", &cotacao_dolar);

    valor_em_dolares = valor_em_reais / cotacao_dolar;

    printf("O valor em dólares é: %.2f\n", valor_em_dolares);

    return 0;
}
