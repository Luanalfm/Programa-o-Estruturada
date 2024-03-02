#include <stdio.h>
#include <time.h>

int main() {
    int ano_nascimento, ano_atual, idade;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;

    printf("Ano de nascimento: ");
    scanf("%d", &ano_nascimento);


    idade = ano_atual - ano_nascimento;
    printf("Sua idade é: %d anos\n", idade);

    return 0;
}
