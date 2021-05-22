//---Essa função realiza a tarefa de adicionar um elemento no final da lista---//

void insereFinal(No **lista,int dado){
    
    No *novo;
    No *atual = *lista;
    
    /*Alocando espaço na mémoria para o novo elemento*/
    novo = (No *)malloc(sizeof(No));
    
    /*Como é o ultimo elemento ele vai apontar para NULL*/
    novo->proximo = NULL;
    /*Passando o dado para o elemento novo*/
    novo->dado = dado;

    /*Se lista estiver vazia '*Lista' recebe novo, como não tem nada na fila e encerra a função*/
    if(listaEhVazia(*lista)){
        *lista = novo;
        return;
    }

    /*Caso contrário vai passando elemento por elemento da lista até achar qual aponta para NULL e esse elemento vai ser o ultimo*/
    while(atual->proximo != NULL){
        atual = atual->proximo;
    }
    
    /*Apos achar o ulitmo ele vai apontar para o novo elemento*/
    atual->proximo = novo;
}