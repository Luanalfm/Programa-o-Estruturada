#include <stdio.h>

int main(){

    int impares=0,n=1,pares=0;


    while (n!=0){
        scanf("%d",&n);
        if (n%2==0){
            pares+=1;
        }
        else{
            impares+=1;
        }
    }

    printf("Existem %d numeros pares e %d numeros impares!",pares-1,impares);

    return 0;
}