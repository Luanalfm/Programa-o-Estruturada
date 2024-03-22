#include <stdio.h>


int binarySearch(int arr[], int size, int key, int *iterations) {
    int left = 0;
    int right = size - 1;
    int mid;
    
    *iterations = 0; 

    while (left <= right) {
        (*iterations)++; 
        
        mid = left + (right - left) / 2; 
        
       
        if (arr[mid] == key) {
            return mid; 
        } else if (arr[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printf("Insira o codigo do produto para descobrir a sua posicao em estoque: \n");
    scanf("%d", &key); 
    int iterations; 


    int pos = binarySearch(arr, size, key, &iterations);

    if (pos != -1) {
        printf("O elemento %d foi encontrado na posicao %d.\n", key, pos);
    } else {
        printf("O elemento %d nao foi encontrado no vetor.\n", key);
    }

    printf("Numero de iteracoes necessarias: %d\n", iterations);

    return 0;
}
