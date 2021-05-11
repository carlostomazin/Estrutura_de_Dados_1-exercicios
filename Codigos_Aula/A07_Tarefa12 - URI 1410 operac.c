#include "A07_Tarefa12 - URI 1410 header.h"

void insertSort(int *vetor, int N){
    for (i = 1; i < N; i++){
        aux = vetor[i];
        for (j = i - 1; (j >= 0) && (aux < vetor[j]); j--){
            vetor[j + 1] = vetor[j];
        }
        
        vetor[j + 1] = aux;
    }
}