#include <stdio.h>

int main(){

    int n=3;

    while (n<50){
        if (n%3==0){
            printf("%d\n",n);
        }
        n+=1;
    }

    return 0;
}