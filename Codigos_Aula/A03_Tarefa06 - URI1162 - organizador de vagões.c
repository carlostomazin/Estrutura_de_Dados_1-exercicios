#include <stdio.h>

int S;

void bubbleSort2 (int *vetor, int N) {
    int i, j, aux, troca = 1;
    S = 0;
    for (i = 0; (i < N-1) && troca; i++) {
        troca = 0;
        for (j = 0; j < N-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                troca = 1;
                S++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",S);
}
    

int main(){

    int N,L; 
    int ctd,i;

    scanf("%d",&N);

    
    for(ctd = 0; ctd < N; ctd++){
        scanf("%d",&L);
        int tamanho_trem[L];
        for(i = 0; i < L; i++){
            scanf("%d",&tamanho_trem[i]);
        }
        bubbleSort2(tamanho_trem,L);
    }
    
    return 0;
}