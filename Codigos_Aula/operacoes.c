#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estacion.h"


/* funcao que inicializa a pilha -------------------------------------- */
void inicializaPilha (No **pilha) {

    *pilha = NULL;

} /* fim da funcao inicializaPilha */

/* funcao que verifica se a pilha esta vazia -------------------------- */
int pilhaVazia (No *pilha) {

    if (pilha == NULL)
        return 1;

    return 0;

} /* fim da funcao pilhaVazia */

/* funcao que imprime o conteudo da pilha ----------------------------- */
void imprimePilha (No *pilha) {

    No *atual = pilha;

    system("cls");
    printf("\nDIEGO'S PARKING HALL\n");
    printf("Veiculos estacionados\n");

    if (pilhaVazia(pilha)){
		printf("Estacionamento vazio\n");
        return;
	}

    while (atual != NULL) {
        printf("%d - Placa: %s\n", atual->nroCarro, atual->placa);
        atual = atual->proximo;
    }

} /* fim da funcao imprimePilha */

/* funcao que insere um elemento no topo da pilha --------------------- */
/* (no caso, o topo da pilha ser� no in�cio da estrutura)                */
void push (No **pilha, int nro, char *placa) {

    No *novo;

    /* cria o novo noh a ser inserido na pilha */
    novo = (No*) malloc (sizeof(No));
    novo->nroCarro = nro;
    strcpy(novo->placa, placa);
    
    /* se a pilha estiver vazia, novo noh aponta para NULL */
    if (pilhaVazia(*pilha))
    	novo->proximo = NULL;
    /* caso contrario, novo noh aponta para o inicio da pilha */
    else
        novo->proximo = *pilha;


    /* novo noh passa a ser o topo da pilha */
	*pilha = novo;

} /* fim da funcao push */

/* funcao que remove o elemento do topo da pilha ---------------------- */
/* o topo da pilha ser� no in�cio da estrutura */
void pop (No **pilha) {

    No *aux = *pilha;
    char placa[8];

    if (pilhaVazia(*pilha)){
    	printf("Estacionamento vazio\n");
    	return;
	}

    /* inicio da pilha passa a ser o segundo noh (ou NULL) */
    *pilha = aux->proximo;

    /* remove o primeiro noh da memoria */
    free(aux);
    
} /* fim da funcao pop */

void manobra(No **pilha, int alvo){

    No *princ = *pilha;
    No *aux2;
    aux2 = NULL;
    int posicao = princ->nroCarro;

    if (pilhaVazia(*pilha))
    	return;

    while((posicao > alvo) && (princ != NULL)){
		push(&aux2, princ->nroCarro, princ->placa);
        pop(&princ);
        posicao --;
	}
    
    pop(&princ);

    while (alvo > 1){
        push(&princ, aux2->nroCarro, aux2->placa);
        pop(&aux2);
        alvo--;
    }

    *pilha = princ; 

    // while (princ != NULL) {
    //     printf("%d - Placa: %s\n", princ->nroCarro, princ->placa);
    //     princ = princ->proximo;
    // }
}