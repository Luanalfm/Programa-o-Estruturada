#include <stdio.h>

int main() {
    
    int multiplicador = 1; 

    printf("Tabuada do 9:\n");

    while (multiplicador <= 10) { 

        int resultado = 9 * multiplicador; 
        printf("9 x %d = %d\n", multiplicador, resultado); 
        multiplicador++;
    }

    return 0;
}
