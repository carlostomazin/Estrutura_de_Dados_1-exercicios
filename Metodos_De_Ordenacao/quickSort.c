#include <stdio.h>
#define quant 10


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

    int dados[quant];
    int ctd;

    printf("Insira os valores: \n");

    /*PEGA OS DADOS*/
    for(ctd = 0; ctd < quant; ctd++){
        scanf("%d",&dados[ctd]);
    }

    /*CHAMA A FUNCAO PARA REALIZAR A ORDENACAO DOS DADOS*/
    quickSort(dados,0,quant-1);
    
    printf("\n");
    
     /*MONTRA OS RESULTADO*/
    for(ctd = 0; ctd < quant; ctd++){
        printf("%d ",dados[ctd]);
    }

    return 0;
}