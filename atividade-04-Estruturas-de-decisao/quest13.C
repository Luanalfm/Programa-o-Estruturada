#include <stdio.h>

int main () {
    int s_funcionario;
    double result;
    double aumento;

    printf("Insira o valor do salario: \n");
    scanf("%d", &s_funcionario);

    if (s_funcionario >= 1500.00) {
        result = (s_funcionario * 0.1) + s_funcionario;
        aumento = result - s_funcionario;
        printf("O novo salario e %.2f\n", result);
        printf("aumento foi de %.2f\n", aumento);

    } else {
        result = (s_funcionario * 0.15) + s_funcionario;
        aumento = result - s_funcionario;
        printf("O novo salario e %.2f\n", result);
        printf("aumento foi de %.2f\n", aumento);
    }

    return 0;
}
