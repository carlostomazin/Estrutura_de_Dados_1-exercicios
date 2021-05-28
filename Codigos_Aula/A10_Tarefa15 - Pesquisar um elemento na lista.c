No* pesquisaElemento(No *Lista, int dado){

	No *aux = Lista;

	while ((aux != NULL) && (aux->dado != dado)){
		aux = aux->proximo;
	}

	return aux;
}