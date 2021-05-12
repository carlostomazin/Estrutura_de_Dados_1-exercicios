#include <stdio.h>
#include <stdlib.h>
#include "A08_exerci03 - header.h"

void inicializaLista(No **lista){
    *lista == NULL;
}

int listaVazia(No *lista){
    if(lista == NULL){
        return 1;
    }
    return 0;
}

void imprimiLista(No *);

void insereInicio(No **lista, int dado){
    No *novo;
    
    novo = (No *)malloc(sizeof(No));
    novo->dado = dado;

    if(listaVazia(*lista)){
        novo->proximo = NULL;
    }else{
        novo->proximo = *lista;
    }
    *lista = novo;
}

void insereFinal(No **lista,int dado){
    
    No *novo;
    novo = (No *)malloc(sizeof(No));
    //Como é o ultimo elemento o proximo sempre vai ser NULL
    novo->proximo == NULL;
    novo->dado = dado;

    No *aux;
    //auxiliar para receber a lista
    aux = *lista;

    if(listaVazia(*lista)){
        *lista = novo;
    }else{
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
    }
    
    *lista = novo;
    

}

void removeInicio(No **);
void removeFinal(No **);