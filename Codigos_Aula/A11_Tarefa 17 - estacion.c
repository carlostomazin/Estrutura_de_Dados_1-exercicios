#include "A11_Tarefa 17 - estacion operac.c"
#include <stdio.h>
#include <stdlib.h>

int main(){
    No *vagas;

    int op, nroVeiculo=0, nro;
    char placa[8];

    inicializaPilha(&vagas);
    mostrarEstacionados(&vagas);

    while (1){
        fflush(stdin);
        printf("\nDIEGO'S PARKING HALL\n");
        printf("1 - Entrada no estacionamento\n");
        printf("2 - Saida do ultimo carro do estacionado\n");
        printf("3 - Saida de um carro especifico\n");
        printf("4 - Exibir os carro estacionados\n");
        printf("5 - Encerrar o dia\n");

        
        scanf("%d", &op);

        if(op == 5){
            break;
        }
        if(op == 1){
            nroVeiculo++;
            fflush(stdin);
            printf("Placa do veiculo: ");
            scanf("%s",placa);
            
            push(&vagas, nroVeiculo, placa);
        }
        if (op == 4){
            mostrarEstacionados(&vagas);
        }
        
    }
    
    return 0;
}