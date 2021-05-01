#include <stdio.h>
#include <string.h>>
#define quant 27

typedef struct{
    char estado[40];
    float taxa_mm_09;
    float taxa_mm_15;
    float indice;
}odsbr;


void quickSort(odsbr *vetor, int esquerda, int direita){

    int i,j;
    float aux,pivo;
    char aux2[40];

    i = esquerda;
    j = direita;

    pivo = vetor[direita].taxa_mm_15;

    if((i == esquerda) && (j == direita)){
        while (i <= j){
            while ((vetor[i].taxa_mm_15 < pivo) && (i < direita)){
                i++;
            }
            while ((vetor[j].taxa_mm_15 > pivo) && (j > esquerda)){
                j--;
            }
            if(i <= j){
                aux = vetor[i].taxa_mm_15;
                vetor[i].taxa_mm_15 = vetor[j].taxa_mm_15;
                vetor[j].taxa_mm_15 = aux;

                strcpy(aux2,vetor[i].estado);
                strcpy(vetor[i].estado,vetor[j].estado);
                strcpy(vetor[j].estado,aux2);
                
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

    odsbr dados[quant];
    FILE *arqEnt;
    int ctd;
    char aux2[40];

    arqEnt = fopen("A03_Bonus01 - ODS arqEnt.txt","r");

    if (arqEnt == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    //printf("Insira os valores: \n");

    /*PEGA OS DADOS*/
    for(ctd = 0; ctd < quant; ctd++){
        fscanf(arqEnt,"%s %f %f",
        dados[ctd].estado,
        &dados[ctd].taxa_mm_09,
        &dados[ctd].taxa_mm_15);
    }

    system("cls");
    printf("\n");
    
    /*MONSTRA OS DADOS ANTES DA ORDENAÇÃO*/
    // for(ctd = 0; ctd < quant; ctd++){
    //     printf("%-20s %-7.2f %-7.2f \n",
    //     dados[ctd].estado,
    //     dados[ctd].taxa_mm_09,
    //     dados[ctd].taxa_mm_15);
    // }
    
    /*FAZ O CALCULO DO INDICE DO ANO 2009 E 2015*/
    for(ctd = 0; ctd < quant; ctd++){
        dados[ctd].indice = dados[ctd].taxa_mm_15 - dados[ctd].taxa_mm_09;
    }

    /*CHAMA A FUNCAO PARA REALIZAR A ORDENACAO DOS DADOS*/
    quickSort(dados,0,quant-1);

    printf("\n \n");

     /*MONTRA OS RESULTADO*/
    printf("%-20s %-45s %-7s \n", "ESTADOS", "TAXA DE MORTALIADE MATERNA - 2015", "INDICE");

    for(ctd = 0; ctd < quant; ctd++){
        printf("%-29s %-30.2f %7.2f",
        dados[ctd].estado,
        dados[ctd].taxa_mm_15,
        dados[ctd].indice);
        if(dados[ctd].indice < 0){
            printf(" - NEGATIVO \n");
        }else if(dados[ctd].indice > 0){
            printf(" - POSITIVO \n");
        }else
            printf(" - NEUTRO \n");
    }

    printf("\n");

    fclose(arqEnt);
    return 0;
}