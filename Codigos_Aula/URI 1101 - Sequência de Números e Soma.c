#include <stdio.h>

int main(){

    int M,N,ctd,aux,soma=0;
    
    while (scanf("%d %d",&M, &N)){
        if(M <= 0 || N <= 0){
            break;
        }
        
        if(M < N){
            aux = M;
            M = N;
            N = aux;
        }
        
        for(ctd=N; ctd<=M; ctd++){
            printf("%d ",ctd);
            soma+=ctd;
        }
        printf("Sum=%d\n",soma);
        soma=0;
    }
    

    return 0;
}