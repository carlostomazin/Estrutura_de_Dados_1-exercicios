#include <stdio.h>
#include "A07_Tarefa12 - URI 1410 operac.c"

int main(void){

    while (scanf("%d %d", &A, &D) && A && D){

        for (ctd = 0; ctd < A; ctd++){
            scanf("%d", &atc[ctd]);
        }
        for (ctd = 0; ctd < D; ctd++){
            scanf("%d", &dfs[ctd]);
        }

        insertSort(atc, A);
        insertSort(dfs, D);

        if (atc[0] < dfs[0] || atc[0] < dfs[1])
            printf("Y\n");
        else
            printf("N\n");
    }
}