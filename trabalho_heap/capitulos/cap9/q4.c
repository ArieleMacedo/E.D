#include <stdio.h>
#include "lista.h"

Lista inversa(Lista L){
    Lista ant = NULL;
    Lista atual = L;
    while (atual != NULL){
        Lista prox = atual->prox;
        atual->prox = ant;
        ant = atual;
        atual = prox;
    }
    return ant;
}

int main(void){
    Lista L = incluir(1,incluir(2,incluir(3,incluir(4,incluir(5,NULL)))));
    exibir(inversa(L));
}