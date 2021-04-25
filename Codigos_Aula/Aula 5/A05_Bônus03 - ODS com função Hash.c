#include <stdio.h>
#include <string.h>
#define num 27
#define M 97
int colisao = 0;

typedef struct _estado{
    int chave_hash;
    char estado[2];
    int calc_ascii;
}ods;

typedef struct _tabelaHash{
    char estado[2];
}valor;

int main (){
    ods dados[num];
    valor vetor[M];
    FILE *arqEnt;

    arqEnt = fopen("A05_Bonus03 - ODS arqEnt.txt", "r");
    if (arqEnt == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    int ctd,i, hash;

    /* for para zerar a varivel calc_ascci de todos os estados. */
    for(ctd=0; ctd<num; ctd++){
        dados[ctd].calc_ascii = 0;
    }

    /* for para ler as entradas apartir de um arquivo. */
    for(ctd=0;ctd<num;ctd++){
        fscanf(arqEnt,"%s", dados[ctd].estado);
        /* for para gerar a chave hash apartir do valor ascii da string. */
        for(i = 0; i < strlen(dados[ctd].estado); i++){
            dados[ctd].calc_ascii += (int)dados[ctd].estado[i];
            dados[ctd].chave_hash = dados[ctd].calc_ascii % num;
            
        }
    }
    /* for para passar por todos os estados e ir alocando eles na tabela Hash com sua determinada posição. */
    for(ctd=0; ctd<num; ctd++){
        /* if para verificar se o espaço de memoria está vazio, se sim alocar o conteudo da var estado 
        na posição(usando a chave hash para essa posição) do vetor tabelaHas, ... */
        if( strlen(vetor[dados[ctd].chave_hash].estado) <= 0){
            strcpy(vetor[dados[ctd].chave_hash].estado, dados[ctd].estado);
        }else{
            /* se não vai se criar um laço para ir pulando de posição em posição, até achar um espaço vazio. */
            i = dados[ctd].chave_hash + 1;
            colisao++;
            while (1){
                if( strlen(vetor[i].estado) <= 0 && i < M){
                    strcpy(vetor[i].estado, dados[ctd].estado);
                    break;
                }
                colisao++;
                i++;
            }
        } 
    }

    printf("Numero de colisoes: %d",colisao);

    fclose(arqEnt);
    return 0;
}