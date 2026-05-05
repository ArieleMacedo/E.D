#include <stdio.h>
#include "lista.h"

int igual(Lista A, Lista B){
    if (A == NULL && B == NULL) return 1;
    if(A  == NULL || B == NULL) return 0;
    if (A->item != B->item) return 0;
    
    return igual(A->prox, B->prox);
}

int main(void){
    Lista A = incluir(1,incluir(2,incluir(3,incluir(4,incluir(1,NULL)))));
    Lista B = incluir(1,incluir(2,incluir(3,incluir(4,incluir(1,NULL)))));
    Lista C = incluir(1,incluir(2,incluir(1,incluir(4,incluir(1,NULL)))));
    
    printf("%d",igual(A,B));
    putchar('\n');
    printf("%d",igual(A,C));
}