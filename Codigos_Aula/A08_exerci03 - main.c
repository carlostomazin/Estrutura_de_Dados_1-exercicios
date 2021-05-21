#include <stdio.h>
#include "A08_exerci03 - operac.c"

int main () {

    No *inicio;//, *aux;

    inicializaLista(&inicio);
    imprimeLista(inicio);

/* POR ENQUANTO COMENTAR AS OPERAÇOES 
   ABAIXO PARA USAR INSERÇAO ORDENADA
*/
   
    printf("\nInsere 4 no inicio\n");
    insereInicio(&inicio, 4);
    imprimeLista(inicio);

    printf("\nInsere 8 no inicio\n");
    insereInicio(&inicio, 8);
    imprimeLista(inicio);

    printf("\nInsere 3 no inicio\n");
    insereInicio(&inicio, 3);
    imprimeLista(inicio);

    printf("\nInsere 23 no inicio\n");
    insereInicio(&inicio, 23);
    imprimeLista(inicio);
    
    printf("\nInsere 18 no final\n");
    insereFinal(&inicio, 18);
    imprimeLista(inicio);

    printf("\nInsere 6 no final\n");
    insereFinal(&inicio, 6);
    imprimeLista(inicio);

    printf("\nInsere 30 no final\n");
    insereFinal(&inicio, 30);
    imprimeLista(inicio);

    printf("\nRemove no final\n");
    removeFinal(&inicio);
    imprimeLista(inicio);

    printf("\nRemove no final\n");
    removeFinal(&inicio);
    imprimeLista(inicio);

    printf("\nRemove no final\n");
    removeFinal(&inicio);
    imprimeLista(inicio);
    
    printf("\nRemove no inicio\n");
    removeInicio(&inicio);
    imprimeLista(inicio);
    
    printf("\nInsere 10 na posicao 2\n");    
    inserePosicao(&inicio, 2, 10);
    imprimeLista(inicio);

    printf("\nInsere 11 na posicao 1\n");    
    inserePosicao(&inicio, 1, 11);
    imprimeLista(inicio);

    printf("\nInsere 12 na posicao zero\n");    
    inserePosicao(&inicio, 0, 12);
    imprimeLista(inicio);

    printf("\nInsere 13 na posicao 2\n");    
    inserePosicao(&inicio, 2, 13);
    imprimeLista(inicio);

    printf("\nInsere 14 na posicao 4\n");    
    inserePosicao(&inicio, 4, 14);
    imprimeLista(inicio);
    /*
    printf("\nRemove o elemento 'dado = 15'\n");    
    removeEspecifico(&inicio, 15);
    imprimeLista(inicio);

    printf("\nRemove 'dado = 14'\n");    
    removeEspecifico(&inicio, 14);
    imprimeLista(inicio);

    printf("\nRemove 'dado = 12'\n");    
    removeEspecifico(&inicio, 12);
    imprimeLista(inicio);

    printf("\nRemove 'dado = 18'\n");    
    removeEspecifico(&inicio, 18);
    imprimeLista(inicio);
    */

/*  RoTINA ESVAZIAR A LISTA SERÁ 
    CODIFICADA NA PRÓXIMA AULA 
*/

/*  PARA EXECUTAR ESSA PARTE DO PROGRAMA
    BASTA COMENTAR AS CHAMADAS ANTERIORES
*/
    /*
    printf("\nInsere 50\n");    
    insereOrdenado(&inicio, 50);
    imprimeLista(inicio);

    printf("\nInsere 55\n");    
    insereOrdenado(&inicio, 55);
    imprimeLista(inicio);

    printf("\nInsere 52\n");    
    insereOrdenado(&inicio, 52);
    imprimeLista(inicio);

    printf("\nInsere 45\n");    
    insereOrdenado(&inicio, 45);
    imprimeLista(inicio);

    printf("\nInsere 47\n");    
    insereOrdenado(&inicio, 47);
    imprimeLista(inicio);

    printf("\nInsere 60\n");    
    insereOrdenado(&inicio, 60);
    imprimeLista(inicio);

    printf("\nInsere 54\n");    
    insereOrdenado(&inicio, 54);
    imprimeLista(inicio);
    */
    


/*  ROTINA DE PESQUISA SERÁ CODIFICADA NA 
    PRÓXIMA AULA
    
    aux = pesquisaElemento(inicio, 45);
    if (aux == NULL) 
	    printf("Elemento nao encontrado!\n");
    else 
	    printf("%d encontrado!\n", aux->dado);

    aux = pesquisaElemento(inicio, 100);
    if (aux == NULL) printf("Elemento nao encontrado!\n");
    else printf("%d encontrado!\n", aux->dado);

    aux = pesquisaElemento(inicio, 60);
    if (aux == NULL) printf("Elemento nao encontrado!\n");
    else printf("%d encontrado!\n", aux->dado);

    aux = pesquisaElemento(inicio, 55);
    if (aux == NULL) printf("Elemento nao encontrado!\n");
    else printf("%d encontrado!\n", aux->dado);

    aux = pesquisaElemento(inicio, 51);
    if (aux == NULL) printf("Elemento nao encontrado!\n");
    else printf("%d encontrado!\n", aux->dado);

    imprimeLista(inicio);
    printf("\nEsvaziando a lista\n");
    
	esvaziaLista(&inicio);
    imprimeLista(inicio);
*/    
    return 0;

} /* fim da funcao main */