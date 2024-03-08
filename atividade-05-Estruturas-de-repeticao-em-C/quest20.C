#include <stdio.h>

int main(){

    int n=1,quantidade=0;
    float div3=0;

    while (n!=0){
        scanf("%d",&n);
        if (n%3==0){
            quantidade+=1;
            div3+=n;
        }
    }

    printf("A media dos numeros divisiveis por 3 eh! : %.2f ",div3/(quantidade-1));

    return 0;
}