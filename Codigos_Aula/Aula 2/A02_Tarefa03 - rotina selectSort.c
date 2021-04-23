#include <stdio.h>
#define TAM 10

void selectSort(int *vetor, int N)
{
    int menor, aux, i, j;
    for (i = 0; i < N - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < N; j++)
            if (vetor[j] < vetor[menor])
                menor = j;
        if (menor != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
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

    selectSort(&bub, TAM);

    printf("Ordem ordenada:\n");
    for (ctd = 0; ctd < TAM; ctd++)
    {
        printf("%d ", bub[ctd]);
    }

    return 0;
}