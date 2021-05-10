#include <stdio.h>

typedef struct{
    int ra;
    char nome[20];
    int idade;
    char sexo;
    float media;
}Aluno;

int main(){

    Aluno *a;
    int ctd;

    a = (Aluno *)malloc(5 * sizeof(Aluno));
    
    for (ctd = 0; ctd < 5; ctd++){
        printf("RA: ");
        scanf("%d", &a[ctd].ra);

        fflush(stdin);
        printf("Nome: ");
        scanf("%s", &a[ctd].nome);

        printf("Idade: ");
        scanf("%d", &a[ctd].idade);

        fflush(stdin);
        printf("Sexo ('M' ou 'F'): ");
        scanf("%c", &a[ctd].sexo);

        printf("Media: ");
        scanf("%f", &a[ctd].media);
    }

    system("cls");

    for (ctd = 0; ctd < 5; ctd++){
    
        printf("\nDado, endereco memoria, qde Bytes\n\n");

        printf("RA: %d \t endereco: %p \t bytes: %d\n", a[ctd].ra, &a[ctd].ra, sizeof(a[ctd].ra));
        printf("Nome: %s \t endereco: %p\t bytes: %d\n", a[ctd].nome, &a[ctd].nome, sizeof(a[ctd].nome));
        printf("Idade: %d \t endereco: %p \t bytes: %d\n", a[ctd].idade, &a[ctd].idade, sizeof(a[ctd].idade));
        printf("Sexo: %c \t endereco: %p \t bytes: %d\n", a[ctd].sexo, &a[ctd].sexo, sizeof(a[ctd].sexo));
        printf("Media: %.2f \t endereco: %p \t bytes: %d\n", a[ctd].media, &a[ctd].media, sizeof(a[ctd].media));
        printf("Endereco '*a': %p \t Bytes '*a': %d", &a, sizeof(a));
        
    }

    return 0;
}