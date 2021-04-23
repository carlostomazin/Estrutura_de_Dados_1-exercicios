#include <stdio.h>
#include <string.h>
#define num 27
#define M 97

typedef struct{
    int chave_hash;
    char estado[2];
}ods;

int main (){
    ods dados[M];
    int ctd,i, calc_ascii, hash;

    for(ctd=0;ctd<num;ctd++){
        scanf("%s", dados[ctd].estado);
        calc_ascii = 0;
        for(i = 0; i < strlen(dados[ctd].estado); i++){
            calc_ascii += (int)dados[ctd].estado[i];
            dados[ctd].chave_hash = calc_ascii % num;
        }
    }

    for(ctd=0;ctd<num;ctd++){
        printf("Valores chave Hash %d\n",dados[ctd].chave_hash);
    }

    
    return 0;
}