#include <stdio.h>
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
    novo = (No *)malloc(size(No));
    novo->dado = dado;

    if(listaVazia(*lista)){
        novo->proximo = NULL;
    }else{
        novo->proximo = *lista;
    }
    *lista = novo;

}

void insereFinal(No **,int);

void removeInicio(No **);
void removeFinal(No **);