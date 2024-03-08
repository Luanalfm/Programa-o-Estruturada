
#include <stdio.h>
#include <stdlib.h>

int main() {
    // variavel c do tipo char declarada e atribuido o valor
    char c = 'a';

    // variavel c do tipo int declarada e atribuido o valor
    int i = 10;

    // variavel float do tipo char declarada e atribuido o valor
    float f = 3.14;

    // declarando ponteiro e atribuindo o enreco de c a ele
    char *pc = &c;

    // declarando ponteiro e atribuindo o enreco de i a ele
    int *pi = &i;

    // declarando ponteiro e atribuindo o enreco de f a ele
    float *pf = &f;


    printf("Endereco de c: %p \n",&c);
    printf("Valor atribuido a c: %c \n",c);
    *pc = 'b';
    printf("Novo valor atribuido a c: %c \n",c);



    printf("Endereco de i: %p \n",&i);
    printf("Valor atribuido a i: %d \n",i);
    *pi = 20;
    printf("Novo valor atribuido a i: %d \n",i);



    printf("Endereco de f: %p \n",&f);
    printf("Valor atribuido a f: %.2f \n",f);
    *pf = 15.09;
    printf("Novo valor atribuido a f: %.2f \n",f);



}