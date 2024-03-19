#include <stdio.h>

int fatorial (int n){
    if (n==0){
        return 1;
    }

    int temp_resultado = n*fatorial(n-1);
    printf("%d \n", temp_resultado);

    return temp_resultado;
}

int main (int argc,char const *argv[])
{
    int resultado = fatorial (3);
    printf("%d", resultado);
    return 0;
}