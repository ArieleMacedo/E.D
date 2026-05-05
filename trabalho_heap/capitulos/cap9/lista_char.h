#include <stdio.h>
#include <stdlib.h>
#define fmt "%c"

typedef char Item;
typedef struct no{
    Item item;
    struct no *prox;
}*Lista;

Lista incluir(Item x, Lista p){
    Lista n = (Lista) malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibir(Lista L){
    while (L != NULL){
       printf(fmt,L->item);
       L=L->prox;
    }
}

void anexar(Lista *A, Lista B){
    if (B == NULL) return;
    while (*A != NULL) A = &(*A)->prox;
    *A = B;
}

void destruir(Lista *L){
    while (*L != NULL){
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
}

int tam(Lista L){    
    if (L == NULL) return 0;
    return 1 + tam(L->prox);
}

int pert (Item x, Lista L){
    if (L ==NULL) return 0;
    if (x == L->item) return 1;
    return pert(x,L->prox);
}

Lista clone(Lista L){
    if (L == NULL) return NULL;
    return incluir(L->item,clone(L->prox));

}

void exibir_inv(Lista L){
    if (L==NULL) return;
    exibir_inv(L->prox);
    printf(fmt,L->item);
}

