
#include <stdio.h>

int main(){

    int n1,n2,n3;
    printf("Digite três numeros inteiros: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if (n1>n2){
        if (n1>n3){
            if (n2>n3){
                printf("%d %d %d",n3,n2,n1);
            }
            else{
                printf("%d %d %d",n2,n3,n1);
            }
        }
        else{
            printf("%d %d %d",n2,n1,n3);
        }
    }

    else{
        if (n2>n3){
            if (n3>n1){
                printf("%d %d %d",n1,n3,n2);
            }
            else{
                printf("%d %d %d",n3,n1,n2);
            }
        }
        else{
            printf("%d %d %d",n1,n2,n3);
        }
    }

    return 0;
}