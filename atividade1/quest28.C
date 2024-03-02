#include <stdio.h>
#include <string.h>

int main() {
    int numero;
    char string[100];

    printf("digite um número inteiro: ");
    scanf("%d", &numero);

    while (getchar() != '\n');

    printf("digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    char mensagem[200]; 
    sprintf(mensagem, "%d %s", numero, string);

    printf("A mensagem concatenada é: %s\n", mensagem);

    return 0;
}
