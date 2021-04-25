#include <stdio.h>
#include <string.h>
#define num 27
#define M 97
int colisao = 0;

typedef struct{
    int chave_hash;
    char estado[2];
    int calc_ascii;
}ods;

typedef struct{
    char estados[2];
}valor;

// void tabelaHash(ods *dad, valor *vet){
//     int ctd,i;

//     for(ctd=0; ctd<num; ctd++){
//         if( vet[dad[ctd].chave_hash + i].estados == " "){
//             strcpy(vet[dad[ctd].chave_hash + i].estados,dad[ctd].estado);
//         }else{
//             i = dad[ctd].chave_hash + 1;
//             colisao = 1;
//             while (1){
//                 if( vet[i].estados == " "){
//                     strcpy(vet[i].estados,dad[ctd].estado);
//                     break;
//                 }
//                 colisao++;
//                 i++;
//             }
//         } 
//     }
// }

int main (){
    ods dados[num];
    valor vetor[M];
    FILE *arqEnt;

    arqEnt = fopen("A05_Bonus03 - ODS arqEnt.txt", "r");
    if (arqEnt == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }

    int ctd,i, hash;
    
    for(ctd=0;ctd<num;ctd++){
        dados[ctd].calc_ascii = 0;
    }
    
    for(ctd=0;ctd<num;ctd++){
        fscanf(arqEnt,"%s", dados[ctd].estado);
        
        for(i = 0; i < strlen(dados[ctd].estado); i++){
            dados[ctd].calc_ascii += (int)dados[ctd].estado[i];
            dados[ctd].chave_hash = dados[ctd].calc_ascii % num;
            
        }
    }

    for(ctd=0; ctd<num; ctd++){
        if( strlen(vetor[dados[ctd].chave_hash].estados) <= 0){
            strcpy(vetor[dados[ctd].chave_hash].estados, dados[ctd].estado);
            printf("certo\n");
        }else{
            i = dados[ctd].chave_hash + 1;
            
            while (1){
                if( strlen(vetor[i].estados) <= 0){
                    strcpy(vetor[i].estados, dados[ctd].estado);
                    printf("certo\n");
                    colisao++;
                    break;
                }
                
                i++;
            }
        } 
    }

    //tabelaHash(dados,vetor);

    // for(ctd=0;ctd<num;ctd++){
    //     //printf("ASCII: %d   ", dados[ctd].calc_ascii);
    //     printf("%d\n",dados[ctd].chave_hash);
    // }

    printf("%d",colisao);

    fclose(arqEnt);
    return 0;
}