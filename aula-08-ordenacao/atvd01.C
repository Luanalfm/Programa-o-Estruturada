
#include <stdlib.h>
#include <stdio.h>

void insertionSort(int array[], int tamanhoDoArray){
    int i, atual, j;
    for (i = 1;i< tamanhoDoArray; i++){
        atual = array[i];
        j = i -1;

        while (j >= 0 && array[j]> atual){
            array[j + 1] = array[j];
            j = j -1;
        }
        array[j +1] = atual;
    }


}