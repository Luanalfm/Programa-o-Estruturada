#include <stdio.h>

int main(){

    float nota1,nota2,nota3;
    printf("Digite suas três notas: ");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

    if ((nota1+nota2+nota3)/3>=7){
        printf("APROVADO!\n");
    }
    else{
        printf("Reprovado.\n");
    }

    return 0;
}