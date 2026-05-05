#include "pilha.h"

Pilha criar_pilha(int n) {
    Pilha pilha = malloc(sizeof(struct pilha));
    if (pilha == NULL) {
        printf("Erro ao alocar memória para pilha");
        exit(1);
    }

    pilha->max = n;
    pilha->topo = -1;

    pilha->item = malloc(n * sizeof(Itemp));
    if (pilha->item == NULL) {
        printf("Erro ao alocar memória");
        free(pilha);
        exit(1);
    }

    return pilha;
}

int vaziap(Pilha pilha) {
    return pilha->topo == -1;
}

int cheiap(Pilha pilha) {
    return pilha->topo == pilha->max - 1;
}

void empilha(Itemp dado, Pilha pilha) {
    if (cheiap(pilha)) {
        puts("Pilha cheia!");
        abort();
    }
    pilha->topo++;
    pilha->item[pilha->topo] = dado;
}

Itemp desempilha(Pilha pilha) {
    if (vaziap(pilha)) {
        puts("Pilha vazia!");
        abort();
    }
    Itemp elemento_removido = pilha->item[pilha->topo];
    pilha->topo--;
    return elemento_removido;
}

Itemp topo(Pilha pilha) {
    if (vaziap(pilha)) {
        puts("Pilha vazia!");
        abort();
    }
    return pilha->item[pilha->topo];
}

void destroi_pilha(Pilha *pilha) {
    free((*pilha)->item);
    free(*pilha);
    *pilha = NULL;
}
