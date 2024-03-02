#include <stdio.h>

int main() {
    char email[100];

    printf("Pdigite seu endereço de e-mail: ");
    scanf("%s", email);

    printf("Obrigado por fornecer seu endereço de e-mail %s. Agradecemos sua participação!\n", email);

    return 0;
}

