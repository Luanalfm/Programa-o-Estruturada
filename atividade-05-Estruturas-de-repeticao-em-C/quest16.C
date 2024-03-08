#include <stdio.h>

int main(){

    float nota;
    int contador=0,ordem=1,aprovados=0;

    while (contador<5){
        printf("Insira a nota %d: ",ordem);
        scanf("%f",&nota);

        if (nota>=7.0){
            aprovados+=1;
        }

        contador+=1;
        ordem+=1;
    }

    printf("%d alunos foram aprovados!",aprovados);


    return 0;
}