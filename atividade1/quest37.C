#include <stdio.h>

int main() {
    int idade, meses, dias;

    printf("digite sua idade em anos: ");
    scanf("%d", &idade);

    meses = idade * 12;
    dias = idade * 365;

    printf("Você viveu aproximadamente %d meses e %d dias.\n", meses, dias);

    return 0;
}
