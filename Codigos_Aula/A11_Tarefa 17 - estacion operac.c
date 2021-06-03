#include "A11_Tarefa 17 - estacion header.h"
#include <stdio.h>
#include <string.h>

void inicializaPilha(No **pilha){
    *pilha = NULL;
}

int estaVazia(No *pilha){
    if(pilha == NULL){
        return 1;
    }
    return 0;
}

void push(No **pilha, int nro, char *placa){
    No *novo;

    novo = (No*) malloc(sizeof(No));
    novo->nroCarro = nro;
    strcpy(novo->placa, placa);

    if(estaVazia(pilha)){
        novo->proximo = NULL;
    }else{
        novo->proximo = *pilha;
    }

    *pilha = novo;
}

void mostrarEstacionados(No *pilha){
    No *atual = pilha;
	
	if(estaVazia(pilha)){
		printf("Estacionamento vazio!!\n");
		return;
	}
	
	while(atual != NULL){
		printf("%d - %s\n",atual->nroCarro, atual->placa);
		atual = atual->proximo;
	}
}