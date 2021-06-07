#include <stdio.h>
#include <stdlib.h>  /* rand()  */
#include <time.h>    /* time()  */
#include <unistd.h>  /* sleep() */
#include "operacoes.c"

# define NUM_VAGAS 4
# define NUM_CARROS 7
# define TEMPO_MAX 3




/* -------------------------------------------------------------------- */
int main () {
    No *vagas;
    int i, op, nroVeiculo=0, nro;
    char placa[8];

    //srand(time(0));

    inicializaPilha(&vagas);

    imprimePilha(vagas);

    while(1) {
	    printf("\nDIEGO'S PARKING HALL\n");
	    printf("1 - Entrada de um novo carro\n");
	    printf("2 - Saida do ultimo carro\n");
	    printf("3 - Saida de um carro especifico\n");
	    printf("4 - Exibe carros estacionados\n");
	    printf("5 - Encerra\n");
	    scanf("%d", &op);
		if(op==5)
			break;
			
		if(op==1){
			nroVeiculo++;
			fflush(stdin);
			printf("Placa do ve�culo: ");
			scanf("%s", placa);
			
			push(&vagas, nroVeiculo, placa);
		}
		
		if(op==2){
			pop(&vagas);
		}
    	
		if(op==3){
			printf("Numero da gia de estacionamento: ");
			scanf("%d", &nro);
			manobra(&vagas, nro);
		}
    	
		if(op==4){
	        imprimePilha(vagas);
		}
    	        
    }

    return 0;

} /* fim da funcao main */
