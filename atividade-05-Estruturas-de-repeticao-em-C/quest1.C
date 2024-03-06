#include<stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    float nota1,nota2,nota3,nota4,nota5,media;
    bool sair = false;
    char continua[10];

    while (sair == false){
        printf("Deseja realizar a media das notas?(sim para continuar ou sair para encerrar o programa):\n ");
        scanf("%s",continua);

        if (strcmp(continua,"sim")==0){ 

            printf("Insira as 5 notas para realizar a media: \n");
            scanf("%f %f %f %f %f",&nota1,&nota2,&nota3,&nota4,&nota5);

            media = (nota1+nota2+nota3+nota4+nota5)/5.0;

                if (media >= 7.0){
                    printf("APROVADO\n");
                    printf("Media: %.2f\n",media);

                }else {
                    printf("REPROVADO");
                    printf("Media: %.2f \n",media);

                }

        }else if (strcmp(continua,"sair")==0) {
            printf("Programa de media de notas encerrado.");
            sair = true;

        }
        

    }

    return 0;
}