#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {
    char d_semana[100];
    bool d_util = false;

    printf("Insira um dia da semana(por extenso): \n");
    scanf("%s",d_semana);

    if (strcmp(d_semana, "segunda-feira") == 0  || strcmp(d_semana,"terca-feira")==0 || strcmp(d_semana,"quarta-feira")==0 || strcmp(d_semana,"quinta-feira")==0 || strcmp(d_semana,"sexta-feira")==0 ) { 
            d_util = true;
        }
    if (d_util) {
        printf("%s e um dia util.\n",d_semana);

    }else {
        printf("%s e um dia do fim de semana",d_semana);

    }
    return 0;


}