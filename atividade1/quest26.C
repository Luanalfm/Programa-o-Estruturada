#include <stdio.h>
#include <string.h>

int main() {
    char cidade[50], estado[50];


    printf("digite o nome da sua cidade: ");
    scanf("%s", cidade);


    printf("digite o nome do seu estado: ");
    scanf("%s", estado);


    strcat(cidade, ", ");
    strcat(cidade, estado);
    strcat(cidade, ".");

    printf("Você mora em %s\n", cidade);

    return 0;
}
