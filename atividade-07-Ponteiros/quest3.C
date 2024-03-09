#include <stdlib.h>
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;

    printf("Digite dois inteiros: \n");
    scanf("%d %d", &a, &b);

    int *pa = &a;
    int *pb = &b;

    printf("O endereco da variavel a e: %p\n", (void *)pa);
    printf("O endereco da variavel b e: %p\n",(void *) pb);

    return 0;
}
