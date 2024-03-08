#include <stdio.h>

int main(){

    int n=1,menor=10000;

    while (n!=0){
        scanf("%d",&n);
        if (0<n && n%2!=0 && n<menor){
            menor=n;
        }
    }

    printf("O menor valor digitado foi %d! ",menor);

    return 0;
}