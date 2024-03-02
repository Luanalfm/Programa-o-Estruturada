#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1,numero2;


    printf("Digite dois numeros:\n");
    scanf ("%d %d", &numero1, &numero2);
    int soma;
    soma = (numero1+numero2);
    printf ("soma de %d e %d = %d\n", numero1, numero2, soma);

    return 0;
}
