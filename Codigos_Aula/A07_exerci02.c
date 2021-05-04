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

    a = (Aluno*) malloc(sizeof(Aluno));

    printf("RA: ");
    scanf("%d", &a->ra);

    fflush(stdin);
    printf("Nome: ");
    scanf("%s", &a->nome);

    printf("Idade: ");
    scanf("%d", &a->idade);

    fflush(stdin);
    printf("Sexo ('M' ou 'F'): ");
    scanf("%c", &a->sexo);

    printf("Media: ");
    scanf("%f", &a->media);

    system("cls");
    
    printf("\nDado, endereco memoria, qde Bytes\n\n");

    printf("RA: %d \t endereco: %p \t bytes: %d\n", a->ra, &a->ra, sizeof(a->ra));
    printf("Nome: %s \t endereco: %p\t bytes: %d\n", a->nome, &a->nome, sizeof(a->nome));
    printf("Idade: %d \t endereco: %p \t bytes: %d\n", a->idade, &a->idade, sizeof(a->idade));
    printf("Sexo: %c \t endereco: %p \t bytes: %d\n", a->sexo, &a->sexo, sizeof(a->sexo));
    printf("Media: %.2f \t endereco: %p \t bytes: %d\n", a->media, &a->media, sizeof(a->media));
    printf("Endereco '*a': %p \t Bytes '*a': %d",&a,sizeof(a));

    return 0;
}