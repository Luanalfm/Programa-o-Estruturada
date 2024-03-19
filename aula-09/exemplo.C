#include <stdio.h>
#include <stdlib.h>

//funçao de busca

int buscarElemento(int vetor[], int tamanho,int elemento){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == elemento){
            return i;

        }
    }
    return -1;
}
int main (){

    int meuVetor[] = {10,20,30,40,50};
    int tamanho = sizeof(meuVetor)/sizeof(meuVetor[0]);
    int elementoBuscado = 55;

    int posicao = buscarElemento(meuVetor,tamanho,elementoBuscado);

//

        if (posicao != -1){
            printf("O elemento %d foi encontrado na posicao %d do vetor. \n", elementoBuscado,posicao);

        } else {
            printf("O elemento %d nao foi encontrado no vetor \n", elementoBuscado); 

    }

    return 0;

}