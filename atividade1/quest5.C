#include <stdio.h>
#include <stdlib.h>

int main() {
    int inteiro;
    float decimal;

    printf("numero inteiro:\n");
    scanf("%d", &inteiro);

    decimal = (float)inteiro;

    printf("Convertido para decimal: %f\n", decimal);

    return 0;
}
