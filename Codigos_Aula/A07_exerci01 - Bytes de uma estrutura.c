#include <stdio.h>

typedef struct _d{
    int dia;
    int mes;
    int ano;
}data;


int main(){

    int aux;

    aux = sizeof(data);

    printf("Quantidade de bytes da estrutura 'data': %d\n", aux);
    return 0;
}