#include <stdio.h>

int main(){

    int n,quantidade=0;

    while (1){

        scanf("%d",&n);

        if (n==0){
            break;
        }

        if(n%2!=0){
            while (2){
                scanf("%d",&n);
                if(n==0){
                    break;
                }
            }
            break;

        }
        if (n%2==0){
            quantidade+=1;
        }
    }
    printf("Foram digitados %d numeros pares antes do primerio impar!",quantidade);

    return 0;
}