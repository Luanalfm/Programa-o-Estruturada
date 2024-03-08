
#include <stdio.h>
#include <stdlib.h>

int main() {
    // variavel c do tipo char declarada eatribuido o valor
    char c = 'a';
    // declarando ponteiro e atribuindo o enreco de c a ele
    char *pc = &c;

    //a)

    printf("Endereco de c: %p \n",&c);
    printf("Valor atribuido a c: %c \n",c);

    //b)

    printf("Valor armazenado por pc: %p \n",pc);
    printf("Valor armazenado no endereco apontado por pc: %c \n",*pc);

    //c)

    printf("Endereco de pc: %p\n",&pc);



}