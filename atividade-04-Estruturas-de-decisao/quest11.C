#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Insira o peso (em kg): ");
    scanf("%f", &peso);

    printf("Insira a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("abaixo do peso.\n");
    } else if (imc < 25) {
        printf("peso normal.\n");
    } else if (imc < 30) {
        printf("sobrepeso.\n");
    } else if (imc < 35) {
        printf("obesidade I.\n");
    } else {
        printf("obesidade II.\n");
    }

    return 0;
}
