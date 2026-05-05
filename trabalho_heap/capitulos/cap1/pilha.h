#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdlib.h>

typedef float Itemp;

// Estrutura da pilha
typedef struct pilha {
    int max;
    int topo;
    Itemp *item; // vetor de elementos
} *Pilha;

// Protótipos
Pilha criar_pilha(int n);
int vaziap(Pilha pilha);
int cheiap(Pilha pilha);
void empilha(Itemp dado, Pilha pilha);
Itemp desempilha(Pilha pilha);
Itemp topo(Pilha pilha);
void destroi_pilha(Pilha *pilha);

#endif
