#include <stdio.h>
#include "lista_char.h"

char ultimo(Lista L){
    if (L==NULL) return '\0';
    while (L->prox != NULL) {
        L = L->prox ;
    }   
    return L->item;
}

int main(void){
    Lista L = incluir('a',incluir('b',incluir('c', NULL)));

    printf("Ultimo Item: %c", ultimo(L));
}