#include <stdio.h>
#define TAM 10

void insertSort(int *vetor, int N)
{
    int aux, i, j;
    for (i = 1; i < N; i++)
    {
        aux = vetor[i];
        for (j = i - 1; (j >= 0) && (aux < vetor[j]); j--){
            vetor[j + 1] = vetor[j];
        }
        
        vetor[j + 1] = aux;
    }
}

int main()
{
    int bub[TAM], ctd;

    for (ctd = 0; ctd < TAM; ctd++)
    {                           /*EXEMPLOS DE ENTRADA*/
        scanf("%d", &bub[ctd]); //1 3 5 8 9 4 7 6 10 2
    }                           //10 8 4 6 5 1 3 2 7 9

    printf("\n");

    printf("Ordem atual:\n");
    for (ctd = 0; ctd < TAM; ctd++)
    {
        printf("%d ", bub[ctd]);
    }

    printf("\n\n");

    insertSort(&bub, TAM);

    printf("Ordem ordenada:\n");
    for (ctd = 0; ctd < TAM; ctd++)
    {
        printf("%d ", bub[ctd]);
    }

    return 0;
}