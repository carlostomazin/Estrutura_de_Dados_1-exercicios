//22505219		1303	Spurs Rocks	Wrong answer (100%)	C	0.000	24/04/2021 00:29:05
/* codigo funcionando, mas o URI está dando erro em uma instancia.
#URI_QUEBRADO*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _tim{
    int numero;
    int pontos;
    int marcados;
    int tomados;
}time;

int ordem(time *a, time *b){
    time *ia = (time*) a; 
    time *ib = (time*) b;
    
    /* if para ver se a pontuação teve empate ou não, se não teve empate realiza-se um return 
    que retonar um valor positivo ou negativo (regra da função qsort), se o valor for positivo o time 
    a (que seria o time x) é ordenado acima do time b (que seria o time z) e vise e versa. */

    /* Essa regra de positivo e negativo vale para todas as outras comparações, sendo elas definidas
    pelo exercicio para o caso de empates.*/
    if((*ib).pontos != (*ia).pontos)
        return (*ib).pontos - (*ia).pontos;
    if((*ib).tomados == 0) 
        (*ib).tomados = 1;
    if((*ia).tomados == 0) 
        (*ia).tomados = 1;

    if((float)(*ib).marcados / (float)(*ib).tomados != (float)(*ia).marcados / (float)(*ia).tomados){
        if((float)(*ib).marcados / (float)(*ib).tomados - (float)(*ia).marcados / (float)(*ia).tomados > 0)
            return 1;
        else
            return -1;
    }
    if((*ib).marcados != (*ia).marcados)
        return (*ib).marcados - (*ia).marcados;
    return (*ib).numero - (*ia).numero;
}


int main(){ 
    
    int n, x, y, z, w, quant_jogos, ctd;
    int instancia = 0;


    /* while para fazer um loop das instancias, já tendo a entrada do n que é a quantidade de times e vendo se
    é igual a 0 para encerrar o while. */
    while (scanf("%d",&n) && n){
        time time[n];

        if(instancia != 0) 
            printf("\n");
        
        instancia++;
        quant_jogos = n*(n - 1) / 2;

        /* for para zerar as variaveis, pois elas teram incrementos. */
        for(ctd=0; ctd < n; ctd++){
            time[ctd].pontos = 0;
            time[ctd].numero = 0;
            time[ctd].marcados = 0;
            time[ctd].tomados = 0;
        }
        
        /* for passando pela quantidade de jogos. */
        for(ctd = 0; ctd < quant_jogos; ctd++){
            scanf("%d %d %d %d", &x, &y, &z, &w);
            /* um if para ver se o time x e z já foram armazenados. */
            if(time[x-1].numero == 0){
                time[x-1].numero = x;
            }
            if(time[z-1].numero == 0){
                time[z-1].numero = z;
            }
            /* armazenando os pontos marcados e tomados do time x e z. */
            time[x-1].marcados += y;
            time[x-1].tomados += w;
            time[z-1].marcados += w;
            time[z-1].tomados += y;

            /* um if para ver qual time ganhou a partida e armazenando os pontos ganhos. */
            if(y > w){
                time[x-1].pontos += 2;
                time[z-1].pontos += 1;
            }else{
                time[z-1].pontos += 2;
                time[x-1].pontos += 1;
            }
        }
        
        /*chamando a função qsort para fazer a ordenação da classificação e tendo um função 
        chamada ordem, que serve para passar como será feita a ordencação dos dados. */
        qsort(time,n,sizeof(struct _tim),ordem);
    
        printf("Instancia %d\n",instancia);

        /* um for para mostrar os resultados/classificação. */
        for(ctd = 0; ctd < n ; ctd++){
            printf("%d",time[ctd].numero);
            
            if (ctd != n-1 )
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}