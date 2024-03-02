#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];

    printf("digite uma string: ");
    scanf("%s", texto);

    printf("O tamanho da string é: %d\n", strlen(texto));

    return 0;
}
