#include <stdio.h>

int main (int argc, char const *argv[])
{
    int inteiro = 10;
    float real = 9.99;
    char caracter = "a";

    printf("%d %p",inteiro,&inteiro);

    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_char = &caracter;

    printf("%d \n",inteiro);




}