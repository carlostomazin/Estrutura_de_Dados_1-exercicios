#include <stdio.h>
#define num 75

typedef struct{
    int ra;
    float n1;
    float n2;
    float media;
}aluno;

int buscaSequencial(aluno *vetdados,int alvo){
    

    for(int ctd=0; ctd<num; ctd++){
        if(vetdados[ctd].ra == alvo){
            return ctd;
        }
    }
    return -1;
}

int main(){

    aluno dados[num];
    FILE *arqEnt;
    int ctd,result,alvo;

    arqEnt = fopen("A05_Tarefa09 - Busca Sequencial arqEnt - naoOrdenado.txt","r");
    
    if (arqEnt == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    for(ctd = 0; ctd<num; ctd++){
        fscanf(arqEnt,"%d %f %f", &dados[ctd].ra, &dados[ctd].n1, &dados[ctd].n2);
        dados[ctd].media = (dados[ctd].n1 + 2*dados[ctd].n2)/3;
    }

    printf("Qual RA do aluno que deseja buscar? \n");
    scanf("%d",&alvo);

    result = buscaSequencial(dados,alvo);

    if (result == -1){
        printf("RA não existe!!!");
    }else{
        printf("O aluno RA: %d tem: \n N1 = %10.1f \n N2 = %10.1f\n MÉDIA = %6.1f", dados[result].ra,dados[result].n1, dados[result].n2, dados[result].media);
    }

    fclose(arqEnt);
    return 0;
}