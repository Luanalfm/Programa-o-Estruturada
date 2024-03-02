#include <stdio.h>

int main() {
    char data[11]; 
    int dia, mes, ano;

    printf("digite uma data no formato 'dd/mm/aaaa': ");
    scanf("%s", data);

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
