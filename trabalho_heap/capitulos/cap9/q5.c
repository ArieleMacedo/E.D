#include <stdio.h>
#include"lista.h"

int soma(Lista L){
    if (L == NULL) return 0;
    return L->item + soma(L->prox);
}

int main(void){
    Lista L = incluir(1,incluir(2,incluir(3,incluir(4,incluir(5,NULL)))));
    printf("soma: %d",soma(L));
}