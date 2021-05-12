/* ***************************************** */
/* **** principal - arquivo A08lista.c  **** */
/* ***************************************** */
#include <stdio.h>
#include "A08_exerci03 - operac.c"

int main () {

    No* lista;

    inicializaLista(&lista);

    imprimeLista(lista);


    // aqui est�o algumas opera��es com a lista. 
    // fa�a teste com todas as opera��es codificadas 


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

