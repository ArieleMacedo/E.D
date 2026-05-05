#include <stdio.h>
#include <stdlib.h>

typedef char Itemf;

typedef struct fila{
    int max;
    int total;
    int inicio;
    int final;
    Itemf *item;
} *Fila;

Fila fila (int m){
    Fila F = (Fila) malloc(sizeof(struct fila));
    F->max = m;
    F->total = 0;
    F->inicio = 0;
    F->final = 0;
    F->item = (Itemf*) malloc(m*sizeof(Itemf));
    return F;
}

int vazia(Fila F) {
return (F->total == 0);
}

int cheia(Fila F){
    return (F->total == F->max);
}

int avanca(int i, Fila F) {
    return (i + 1) % F->max;
}

void enfileira(Itemf x, Fila F){
    if (cheia(F)) {puts("fila cheia!"); abort();}
    F->item[F->final] = x;
    F->final = avanca(F->final, F);
    F->total++;
}

Itemf desenfileira(Fila F){
    if (vazia(F)) {puts ("fila vazia!"); abort();}
    Itemf x = F->item[F->inicio];
    F->inicio = avanca(F->inicio,F);
    F->total--;
    return x;
}

void destroi(Fila *G){
    free((*G)->item);
    free (*G);
    *G = NULL;
}