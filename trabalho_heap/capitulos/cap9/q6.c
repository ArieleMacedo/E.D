#include <stdio.h>
#include "lista_char.h"

Lista substitui(Item x, Item y,Lista L){
        if (L == NULL) return NULL;
        if (L->item == x)
            L->item = y;
        substitui(x,y, L->prox);
        return L;
}

int main(void){
  Lista L = incluir('b', incluir('o',incluir('b',incluir('o',NULL))));
  exibir(L);
  putchar('\n');
  exibir(substitui('o','a',L));
}