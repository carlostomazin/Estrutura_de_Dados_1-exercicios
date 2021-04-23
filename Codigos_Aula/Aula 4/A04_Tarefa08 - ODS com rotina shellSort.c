#include <stdio.h>
#include <string.h>
#define quant 27

//UMA 'STRUCT' PARA DEFINIR VARIOS DADOS DENTRO DE UMA VAR (BASICAMENTE)
typedef struct{
    char estado[2];
    float taxa_mm_09;
    float taxa_mm_15;
    float indice;
}odsbr;

void shellSort(odsbr *vetor, int N){
    int k;
    int i,j;
    float aux;
    char aux2[2];

    for(k = 5; k > 0; k-=2){
        for(i=k; i < N; i++){ 
            aux = vetor[i].taxa_mm_15;
            strcpy(aux2,vetor[i].estado);
            for(j=i-k; j >= 0 && vetor[j].taxa_mm_15 > aux; j-=k){
                vetor[j+k].taxa_mm_15 = vetor[j].taxa_mm_15;
                strcpy(vetor[j+k].estado,vetor[j].estado);
            }
            vetor[j+k].taxa_mm_15 = aux;
            strcpy(vetor[j+k].estado,aux2);
        }
    }
}

int main(){

    odsbr dados[quant];
    FILE *arqEnt;
    int ctd;
    char aux2[2];

    //VAR 'ARQENT' DO TIPO FILE QUE CHAMA A FUNCAO 'FOPEN' PARA ABRIR UM ARQUIVO TXT.
    arqEnt = fopen("A04_Tarefa08 - ODS arqEnt.txt","r");

    //UM 'IF' PARA TESTAR A VAR 'ARQENT' PARA VER SE ESTA VAZIA OU NAO.
    if (arqEnt == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    //UM 'FOR' PARA ENTRADA DE DADOS USANDO O 'FSCANF' QUE É PARA LER O ARQUIVO DE TEXTO.
    for(ctd = 0; ctd < quant; ctd++){
        fscanf(arqEnt,"%s %f %f",
        dados[ctd].estado,
        &dados[ctd].taxa_mm_09,
        &dados[ctd].taxa_mm_15);
    }

    //FUNCAO PARA LIMPAR A TELA
    system("cls");
    printf("\n");
    
    //UM 'FOR' PARA CALCULAR O INDICE DO ANO 2009 E 2015
    for(ctd = 0; ctd < quant; ctd++){
        dados[ctd].indice = dados[ctd].taxa_mm_09 - dados[ctd].taxa_mm_15;
    }

    //CHAMA A FUNCAO 'QUICKSORT' PARA REALIZAR A ORDENACAO DOS DADOS
    shellSort(dados,quant);

    //UM 'PRINTF' E UM 'FOR' PARA MOSTRAR OS DADOS, SENDO QUE DENTRO DO 'FOR' TEM UM TESTE PARA MOSTRA SE O INDICE É POSITIVO OU NEGATIVO
    printf("%-20s %-45s %-7s \n", "ESTADOS", "TAXA DE MORTALIADE MATERNA - 2015", "INDICE");

    for(ctd = quant-1; ctd >0; ctd--){
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

    //FUNCAO PARA FECHAR O ARQUIVO DE TEXTO
    fclose(arqEnt);
    return 0;
}