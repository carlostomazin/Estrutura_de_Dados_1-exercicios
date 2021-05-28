void removeEspecifico(No **Lista, int dado){
	
	No *aux = *Lista;
	No *anterior = *Lista;

	while ((aux != NULL) && (aux->dado != dado)){
		anterior = aux;
		aux = aux->proximo;
	}

	if (aux == NULL){
		return printf("Elemento nao encontrado\n");
	}else if (anterior == *Lista){
		*Lista = aux->proximo;
	}else{
		anterior->proximo = aux->proximo;
	}
	
	free(aux);
}