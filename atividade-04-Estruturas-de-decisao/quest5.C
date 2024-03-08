#include <stdio.h>

int main(){

    int n1,n2;
    printf("Digite dois numeros: ");
    scanf("%d %d",&n1,&n2);

    if (n1>n2){
        printf("O primeiro numero é maior!\n");
    }
    else if (n2>n1){
        printf("O segundo numero é maior!\n");
    }
    else{
        printf("Eles são iguais!\n");
    }

    return 0;
}