#include <stdio.h>
#define TAM 10

void merge(int *vetor,int N){
    int meio,i=0,j,k=0;
    int vetorAux[N];

    meio = N/2;
    j = meio;

    while (i < meio && j < N){
        if(vetor[i] <= vetor[j]){
            vetorAux[k++] = vetor[i++];
        }else
            vetorAux[k++] = vetor[j++];
    }
    
    if(i == meio){
        while (j < N){
            vetorAux[k++] = vetor[j++];
        }
    }else{
        while (i < meio){
            vetorAux[k++] = vetor[i++];
        }
    }
    for(i=0; i < N; i++){
         vetor[i] = vetorAux[i];
    }    
}

void mergeSort(int *vetor,int N){
    int meio;

    if(N > 1){
        meio = N/2;
        mergeSort(vetor,meio);
        mergeSort(&vetor[meio],N-meio);
        merge(vetor,N);
    }
}


int main(){
    

    int vetor[TAM] = {4, 6, 9, 3, 10, 2, 1, 5, 7, 8};

    printf("Antes da ordenação: \n");
    for(int ctd = 0; ctd < TAM; ctd++){
        printf("%d ",vetor[ctd]);
    }

    printf("\n\n");

    mergeSort(vetor,TAM);

    printf("Depois da ordenação: \n");
    for(int ctd = 0; ctd < TAM; ctd++){
        printf("%d ",vetor[ctd]);
    }
    
    return 0;
}