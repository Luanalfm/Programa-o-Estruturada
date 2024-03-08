
#include <stdio.h>

int main(){

    char letra;

    printf("Digite uma letra minúscula: ");
    scanf("%c",&letra);

    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
        printf("A letra é uma vogal!\n");
    }
    else{
        printf("A letra é uma consoante!\n");
    }

    return 0;
}