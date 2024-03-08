#include <stdio.h>

int main(){

    int n=1,quantidade=0;
    float div=0;

    while (n!=0){
        scanf("%d",&n);
        if (50<n && n<100){
            quantidade+=1;
            div+=n;
        }
    }

    printf("A media dos numeros entre 50 e 100! : %.2f ",div/(quantidade));

    return 0;
}