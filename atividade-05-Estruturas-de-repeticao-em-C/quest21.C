#include <stdio.h>

int main(){

    int quantidade=0,n=3;

    while (n!=0){
        scanf("%d",&n);
        if (n>99){
            quantidade+=1;
        }
    }

    printf("Existem %d numemros com tres digitos ou mais!",quantidade);

    return 0;
}