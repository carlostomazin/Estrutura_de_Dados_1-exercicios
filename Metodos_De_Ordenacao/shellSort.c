#include <stdio.h>
#define TAM 10

void shellSort(int *vetor, int N){
    int k;
    int i,j,aux;


    for(k = 5; k > 0; k-=2){
        for(i=k; i < N; i++){ 
            aux = vetor[i];
            for(j=i-k; j >= 0 && vetor[j] > aux; j-=k){
                vetor[j+k] = vetor[j];
            }
            vetor[j+k] = aux;
        }
    }
}

int main() {
    int bub[TAM],ctd;

    for (ctd=0;ctd<TAM;ctd++){          /*EXEMPLOS DE ENTRADA*/
        scanf("%d",&bub[ctd]);          //1 3 5 8 9 4 7 6 10 2 
    }                                   //10 8 4 6 5 1 3 2 7 9
    
    printf("\n");
    
    printf("Ordem atual:\n");
    for (ctd=0;ctd<TAM;ctd++){
        printf("%d ",bub[ctd]);
    }
    
    printf("\n\n");

    shellSort(bub,TAM);

    printf("Ordem ordenada:\n");
    for (ctd=0;ctd<TAM;ctd++){
        printf("%d ",bub[ctd]);
    }

    return 0;
}
