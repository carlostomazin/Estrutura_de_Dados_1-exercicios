#include <stdio.h>
#include <stdlib.h>
#include "A08_exerci03 - header.h"

//--Inicializa a lista--//
void inicializaLista(No **lista){
    *lista = NULL;
}

//--Verifica se a lista esta vazia--//
int listaEhVazia(No *lista){
    if(lista == NULL){
        return 1;
    }
    return 0;
}

//--Insere um elemento no inicio da lista--//
void insereInicio(No **lista, int dado){
    No *novo;
    
    novo = (No *)malloc(sizeof(No));
    novo->dado = dado;

    if(listaEhVazia(*lista)){
        novo->proximo = NULL;
    }else{
        novo->proximo = *lista;
    }
    *lista = novo;
}

//--Remove um elemento no final da lista--//
void removeFinal(No **lista){
	
	No *atual = *lista;
	No *posAnterior = *lista;
	
	if(listaEhVazia(*lista))
		return;
	
	/* caminhar até o final */
	while(atual->proximo != NULL){
		posAnterior = atual;
		atual = atual->proximo;	
	}
	
	/* se tiver apenas um elemento na lista */
	if(atual == *lista){
      *lista = NULL;
    }
	else{ // caso contrário, o penultimo nó deve ter proximo = NULL
       posAnterior->proximo = NULL;
    }
	/* liberar memória do nó a ser removido */   
	free(atual);
}

//--Imprime a lista--//
void imprimeLista(No *lista){
	
	No *atual = lista;
	
	if(listaEhVazia(lista)){
		printf("A lista esta vazia!!!\n");
		return;
	}
	
	
	printf("Lista: [ ");
	while(atual != NULL){
		printf("%d ", atual->dado);
		atual = atual->proximo;
		
	}
	
	printf("]\n");
}

//--Insere um elemento em determinada posição da lista--//
void inserePosicao(No **lista, int posicao, int dado){
	No *novo;
	No *atual = *lista;
	No *posAnterior = *lista;
	
	int pos = 0;
	
	printf("----> insere %d na posicao %d\n", dado, posicao);
	
	/* criar o novo noh a ser inserido na lista */
	novo = (No*) malloc(sizeof(No));
	novo->dado = dado;
	novo->proximo = NULL;
	
	/* se a lista esta vazia, o novo noh passa a ser o inicio */
	if(listaEhVazia(*lista)){
		*lista = novo;
		return;
	}
	
	if(posicao == 0){
	   novo->proximo = 	atual;
	   *lista = novo;
	   return;
	}
	
	/* achar a posicao de inclusao no meio ou final da lista */
	while((pos<posicao) && (atual != NULL)){
		posAnterior = atual;
		atual = atual->proximo;
		pos++;
	}
	
	/* insere o novo noh na posicao encontrada */
	/* ou depois do último noh */
	posAnterior->proximo = novo;
	novo->proximo = atual;
}

//--Insere um elemento de forma ordenada na lista--//
void insereOrdenado(No **lista, int dado){
	No *novo;
	No *atual = *lista;
	No *posAnterior = *lista;
	
	/* criar o novo noh a ser inserido na lista */
	novo = (No*) malloc(sizeof(No));
	novo->dado = dado;
	novo->proximo = NULL;
	
	/* se a lista esta vazia, o novo noh passa a ser o inicio da lista */
	if(listaEhVazia(*lista)){
		*lista = novo;
		return;
	}

	/* caso contrario, caminhar até achar o local correto na lista */
	/* insere após o final da lista */
	while((atual != NULL) && (atual->dado < dado)){
		posAnterior = atual;
		atual = atual->proximo;
	}
	
	/* sed a posicao for antes do inicio da lista */
	/* entao, a inclusao será no inicio da lista */
	if(atual == *lista){
		insereInicio(lista, dado);
		return;
	}
	
	/* caso contrário, insere no meio ou após o final da lista */
	posAnterior->proximo = novo;
	novo->proximo = atual;	
}

void insereFinal(No **lista,int dado){
    
    No *novo;
    No *atual = *lista;

    novo = (No *)malloc(sizeof(No));
    
    novo->proximo = NULL;
    novo->dado = dado;

    if(listaEhVazia(*lista)){
        *lista = novo;
        return;
    }

    while(atual->proximo != NULL){
        atual = atual->proximo;
    }
    
    atual->proximo = novo;
}

void removeInicio(No **Lista){


    No *atual = *Lista;

    if(listaEhVazia(*Lista))
		return;
    
	printf("Removendo %d\n",atual->dado);
    *Lista = atual->proximo;
    atual = NULL;
     
    free(atual);
}

No* pesquisaElemento(No *Lista, int dado){

	No *aux = Lista;

	while ((aux != NULL) && (aux->dado != dado)){
		aux = aux->proximo;
	}

	return aux;
	
}

void esvaziaLista(No **Lista){

	while(!listaEhVazia(*Lista)){
		removeFinal(Lista);
	}
}

void removeEspecifico(No **Lista, int dado){
	
	No *aux = *Lista;
	No *anterior = *Lista;

	while ((aux != NULL) && (aux->dado != dado)){
		anterior = aux;
		aux = aux->proximo;
	}

	if (aux == NULL){
		return printf("Elemento nao encontrado\n");
	}else if (anterior == *Lista){
		*Lista = aux->proximo;
	}else{
		anterior->proximo = aux->proximo;
	}
	
	free(aux);
}