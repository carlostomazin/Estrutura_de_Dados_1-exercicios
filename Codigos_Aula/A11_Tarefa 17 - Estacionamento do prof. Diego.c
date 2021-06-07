void manobra(No **pilha, int alvo){

    No *princ = *pilha;
    No *aux2;
    aux2 = NULL;
    int posicao = princ->nroCarro;

    if (pilhaVazia(*pilha))
    	return;

    while((posicao > alvo) && (princ != NULL)){
		push(&aux2, princ->nroCarro, princ->placa);
        pop(&princ);
        posicao --;
	}
    
    pop(&princ);

    while (alvo > 1){
        push(&princ, aux2->nroCarro, aux2->placa);
        pop(&aux2);
        alvo--;
    }

    *pilha = princ; 

    // while (princ != NULL) {
    //     printf("%d - Placa: %s\n", princ->nroCarro, princ->placa);
    //     princ = princ->proximo;
    // }
}