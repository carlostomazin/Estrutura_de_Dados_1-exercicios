#ifndef PILHA_H
#define PILHA_H

typedef struct _no{
   int nroCarro;
   char placa[8];
   struct _no *proximo; 
}No;

/* declaração de operações */

void inicializaPilha(No**);
int estaVazia(No*);

void mostrarEstacionados(No*);

void push(No**, int, char*);
void pop(No**);

void manobra(No**, int);

#endif