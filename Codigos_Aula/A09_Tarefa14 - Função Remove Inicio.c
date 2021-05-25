//---Essa função realiza a tarefa de remover o primiero elemento da lista---//

void removeInicio(No **Lista){

    /*Uma variavei do tipo No para trabalhar com a Lista.(Sendo '*Lista' o inicio da lista).*/
    No *atual = *Lista;

    /*Ver se a lista está vazia, se estiver encerra a função.*/
    if(listaEhVazia(*Lista))
		return;
    
	printf("Removendo %d\n",atual->dado);
    /*Passando o INICIO para o segundo elemento da lista.(Usando o apontamento do primeiro elemento)*/
    *Lista = atual->proximo;

    /*Liberando a memória do primeiro elemento.*/
    free(atual);
}