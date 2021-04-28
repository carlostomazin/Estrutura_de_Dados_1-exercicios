#include <stdio.h>
#define TAM 10


void quickSort(int *vetor, int esquerda, int direita){

    int i,j,pivo,aux;

    i = esquerda;
    j = direita;

    pivo = vetor[direita];

    if((i == esquerda) && (j == direita)){
        while (i <= j){
            while ((vetor[i] < pivo) && (i < direita)){
                i++;
            }
            while ((vetor[j] > pivo) && (j > esquerda)){
                j--;
            }
            if(i <= j){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                i++;
                j--;
            }
        }
    }
    if(j > esquerda)
        quickSort(vetor, esquerda, j);
    if(i < direita)
        quickSort(vetor, i, direita);
}

int main(){

    int dados[TAM];
    int ctd;

    printf("Insira os valores: \n");

    for(ctd = 0; ctd < TAM; ctd++){     /*EXEMPLOS DE ENTRADA*/
        scanf("%d",&dados[ctd]);        //1 3 5 8 9 4 7 6 10 2
    }                                   //10 8 4 6 5 1 3 2 7 9

    quickSort(dados,0,TAM-1);
    
    for(ctd = 0; ctd < TAM; ctd++){
        printf("%d ",dados[ctd]);
    }

    return 0;
}