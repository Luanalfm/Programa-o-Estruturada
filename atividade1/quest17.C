#include <stdio.h>

int main() {
    float altura, peso, imc;


    printf("digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("digite seu peso (em quilogramas): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Seu Índice de Massa Corporal (IMC): %.2f\n", imc);

    return 0;
}
