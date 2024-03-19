#include <stdio.h>
#include <stdlib.h>
//somatorio do numero 1 a N
//condicao de para i = n
//if n =1; n > 1; n++
int main(){
    int n = 0;
    int temp_resultado = 0;

    printf("Insira um numero N maior que 0: ");
    scanf("%d",n);
    return 0;
}
int soma (int n){
    if (n == 0){
        printf("Soma: %d",temp_resultado)
    return 0;
    }


    if (n >= 1){
        temp_resultado += n;
        n = n - 1;
        return soma;
    }

}
