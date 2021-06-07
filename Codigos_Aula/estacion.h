#ifndef PILHA_H
#define PILHA_H

/* estrutura do noh da pilha */
typedef struct _no {
	int nroCarro;
    char placa[8];
    struct _no *proximo;
} No;


/* declaracoes das funcoes de pilha */
void inicializaPilha (No**);
int listaVazia (No*);

void imprimePilha (No*);

void push (No**, int, char*);
void pop (No**);

void manobra(No**, int);

#endif
