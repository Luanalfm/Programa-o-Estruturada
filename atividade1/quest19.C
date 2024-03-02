#include <stdio.h>
#include <string.h>

int main() {
    char estado_civil[20];

    printf("insira seu estado civil: ");
    scanf("%s", estado_civil);

    if (strcmp(estado_civil, "casado") == 0 || strcmp(estado_civil, "casada") == 0) {
        printf("casado(a).\n");
    } else if (strcmp(estado_civil, "solteiro") == 0 || strcmp(estado_civil, "solteira") == 0) {
        printf("solteiro(a).\n");
    } else if (strcmp(estado_civil, "divorciado") == 0 || strcmp(estado_civil, "divorciada") == 0) {
        printf("divorciado(a).\n");
    } else if (strcmp(estado_civil, "viuvo") == 0 || strcmp(estado_civil, "viuva") == 0) {
        printf("viuvo(a).\n");
    } else {
        printf("Estado civil não reconhecido.\n");
    }

    return 0;
}
