#include <stdio.h>
#include <stdlib.h>

int main() {
    int contador = 0;
    float numero;
    char entrada[1000]; 

    printf("Digite uma sequência de números separados por espaço: ");
    
    fgets(entrada, sizeof(entrada), stdin); 

    char *ptr = entrada; 
    while (sscanf(ptr, "%f", &numero) == 1) { 
        contador++;
 
        while (*ptr != ' ' && *ptr != '\0') {
            ptr++;
        }

        if (*ptr == '\0') {
            break;
        }

        ptr++;
    }

    printf("Foram digitados %d números.\n", contador);

    return 0;
}
