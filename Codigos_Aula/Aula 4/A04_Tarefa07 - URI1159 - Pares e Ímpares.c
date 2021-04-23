/*22389410		1259	Pares e Ímpares	Accepted	C	0.076	17/04/2021 14:18:23
CARLOS AUGUSTO FAUSTINO TOMAZIN RA: 108936*/

#include <stdio.h>

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

    int n,ctd,i=0,j=0,par=0,impar=0;

    //UM 'SCANF' PARA ENTRADA DO 'N', SENDO 'N' O NUMERO DE LINHAS PARA OS PROXIMAS ENTRADAS
    scanf("%d",&n);
    //DECLARANDO UMA VAR 'NUMEROS' E TENDO TAMANHO 'N';
    int numeros[n];

    //UM 'FOR' PARA AS LINHAS 'N' DE DADOS
    for(ctd = 0; ctd < n; ctd++){
        scanf("%d",&numeros[ctd]);
    }

    //CHAMA A FUNÇÃO 'QUICKSORT' PARA REALIZAR O ORDENAMENTO DOS DADOS DE FORMA CRESCENTE.
    quickSort(numeros,0,n-1);

    //UM 'FOR' PARA DEFINIR O TAMANHO DO VETOR PAR E VETOR IMPAR.
    for(ctd = 0; ctd < n; ctd++){
        if(numeros[ctd] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    //DECLARANDO UMA VAR PARA PAR E IMPAR E TENDO TAMANHOS DEFINOS NO 'FOR' ANTERIOR.
    int vetPar[par],vetImpar[impar];

    //FUNCAO PARA LIMPAR A TELA.
    system("cls");
    //UM 'FOR' PARA VER SE OS DADOS DO VETOR 'NUMEROS' SAO PAR OU IMPAR, E JÁ COLOCANDO ELES EM SEU DETERMINADO VETOR.
    for(ctd = 0; ctd < n; ctd++){
        if(numeros[ctd] % 2 == 0){
            vetPar[i] = numeros[ctd];
            i++;
        }else{
            vetImpar[j] = numeros[ctd];
            j++;
        }
    }

    //DOIS 'FOR' PARA MOSTRAR OS DADOS DO VETOR PAR E IMPAR, SENDO O VETOR IMPAR MOSTRADO EM ORDEM DECRESCENTE.
    for(ctd = 0; ctd < par; ctd++){
        printf("%d\n",vetPar[ctd]);
    }
    for(ctd = impar-1; ctd >= 0; ctd--){
        printf("%d\n",vetImpar[ctd]);
    }

    return 0;
}