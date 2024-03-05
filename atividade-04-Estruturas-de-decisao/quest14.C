#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {

    int n1;

    printf("Insira um numero: \n");
    scanf("%d",&n1);

    if ((n1 % 3 == 0) && (n1 % 5 == 0)) {

        printf("o numero %d e divisivel por 3 e 5 ao mesmo tempo",n1);

    }else {
        printf("O numero %d nao e divisivel por 3 e 5 ao mesmo tempo\n", n1);
        
    }

    return 0;

}
