#ifndef LISTA_H

#define LISTA_H

typedef struct _no{
    int dado;
    struct _no *proximo;
}No;

void inicializaLista(No **);
int listaEhVazia(No *);

void imprimeLista(No *);

void insereInicio(No**, int);
void insereFinal(No**, int);
void inserePosicao(No**, int, int);
void insereOrdenado(No**, int);

void removeInicio(No**);
void removeFinal(No**);
void removeEspecifico(No**, int);

No* pesquisaElemento(No*, int); // aula 10
void esvaziaLista(No**);  // aula 10

#endif