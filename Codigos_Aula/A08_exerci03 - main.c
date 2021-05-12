/* ***************************************** */
/* **** principal - arquivo A08lista.c  **** */
/* ***************************************** */
#include <stdio.h>
#include "A08operac.c"

int main () {

    No* lista;

    inicializaLista(&lista);

    imprimeLista(lista);


    // aqui estão algumas operações com a lista. 
    // faça teste com todas as operações codificadas 


    insereInicio(&lista, 1);
    imprimeLista(lista);
    insereInicio(&lista, 2);
    imprimeLista(lista);
    insereInicio(&lista, 3);
    imprimeLista(lista);
 
    removeInicio(&lista);
    imprimeLista(lista);
    removeInicio(&lista);
    imprimeLista(lista);
    removeInicio(&lista);
    imprimeLista(lista);

    insereFinal(&lista, 5);
    imprimeLista(lista);
    insereFinal(&lista, 6);
    imprimeLista(lista);
    insereFinal(&lista, 7);
    imprimeLista(lista);

    removeFinal(&lista);
    imprimeLista(lista);
    removeFinal(&lista);
    imprimeLista(lista);
    removeFinal(&lista);
    imprimeLista(lista);
    
    return 0;
} /* fim da funcao main */

