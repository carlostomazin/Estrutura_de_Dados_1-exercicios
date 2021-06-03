#include <stdio.h>
#define num 75

typedef struct{
    int ra;
    float n1;
    float n2;
    float media;
}aluno;

int buscaBinaria(aluno *vetdados,int inicio,int fim,int alvo){
    int meio;

    meio = (int)(inicio + fim) /2;

    if(alvo == vetdados[meio].ra){
        return meio;
    }

    if (inicio >= fim){
        return -1;
    }else if( alvo < vetdados[meio].ra){
        buscaBinaria(vetdados,inicio,meio-1,alvo);
    }else{
        buscaBinaria(vetdados,meio+1,fim,alvo);
    }
}

int main(){

    aluno dados[num];
    FILE *arqEnt;
    int ctd,result,alvo;

    arqEnt = fopen("A05_Tarefa10 - Busca Binaria arqEnt - Ordenado.txt","r");
    
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

    result = buscaBinaria(dados, 0, num-1, alvo);

    if (result == -1){
        printf("RA não existe!!!");
    }else{
        printf("O aluno RA %d tem: \n N1 = %10.1f \n N2 = %10.1f\n MÉDIA = %6.1f", dados[result].ra,dados[result].n1, dados[result].n2, dados[result].media);
    }

    fclose(arqEnt);
    return 0;
}