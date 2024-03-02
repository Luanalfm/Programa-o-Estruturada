#include <stdio.h>
#include <string.h>

int main() {
    char animal[50];
    printf("digite o nome um animal: ");
    scanf("%s", animal);
    if (strcmp(animal, "cachorro") == 0) {
        printf("Você digitou um cachorro!\n");
    } else if (strcmp(animal, "gato") == 0) {
        printf("Você digitou um gato!\n");
    } else if (strcmp(animal, "pássaro") == 0) {
        printf("Você digitou um pássaro!\n");
    } else {
        printf("Você digitou um(a) %s!\n", animal);
    }

    return 0;
}
