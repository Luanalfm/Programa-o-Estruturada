#include <stdio.h>

int main() {
    int produto = 1; 

    int i = 1;
    while (i <= 5) { 
        produto *= i; 
        i++; 
    }

    printf("O produto dos numeros de 1 a 5 e: %d\n", produto);

    return 0;
}
