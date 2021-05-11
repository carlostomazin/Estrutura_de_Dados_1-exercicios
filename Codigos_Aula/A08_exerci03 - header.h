typedef struct _no{
    int dado;
    struct _no *proximo;
} No;

void inicializaLista(No **);
int listaVazia(No *);

void imprimiLista(No *);

void insereInicio(No **, int);
void insereFinal(No **,int);

void removeInicio(No **);
void removeFinal(No **);