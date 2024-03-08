#include <stdio.h>

int main(){

    int div2=0,n=1,div3=0,div5=0;


    while (n!=0){
        scanf("%d",&n);
        if (n%2==0){
            div2+=1;
        }
        if (n%3==0){
            div3+=1;
        }
        if (n%5==0){
            div5+=1;
        }

    }

    printf("Existem %d numeros divisiveis por 2, %d numeros divisiveis por 3, e %d numeros divisiveis por 5!",div2-1,div3-1,div5-1);

    return 0;
}