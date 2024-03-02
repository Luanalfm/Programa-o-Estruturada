#include <stdio.h>
#include <stdlib.h> 

int main() {
    char numero_str[20]; 
    int numero_int; 
    char resultado_str[20];

    
    printf("digite um número inteiro como uma string: ");
    scanf("%s", numero_str);

    numero_int = atoi(numero_str);

    numero_int += 10;

    sprintf(resultado_str, "%d", numero_int);

    printf("O resultado após adicionar 10 é: %s\n", resultado_str);

    return 0;
}
