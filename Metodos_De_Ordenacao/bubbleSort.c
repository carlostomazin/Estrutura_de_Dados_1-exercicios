#include <stdio.h>
#define TAM 10

void bubbleSort2 (int *vetor, int N) {
    int i, j, aux, troca = 1;
    
    for (i = 0; (i < N-1) && troca; i++) {
        troca = 0;
        for (j = 0; j < N-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                troca = 1;
            }
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

    bubbleSort2(&bub,TAM);

    printf("Ordem ordenada:\n");
    for (ctd=0;ctd<TAM;ctd++){
        printf("%d ",bub[ctd]);
    }

    return 0;
}
