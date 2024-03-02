#include <stdio.h>

int main() {
    char nome_produto[50];
    float preco;
    char simbolo_moeda;

    printf("digite o nome do produto: ");
    scanf("%s", nome_produto);

    printf("digite o preço do produto: ");
    scanf("%f", &preco);

    printf("digite o símbolo da moeda: ");
    scanf(" %c", &simbolo_moeda);

    printf("O produto %s custa %.2f %c\n", nome_produto, preco, simbolo_moeda);

    return 0;
}
