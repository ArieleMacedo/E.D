#include <stdio.h>
#include "lista_char.h"

// char enesimo(Item n, Lista L){
//     for (int i=1; L!= NULL;i++, L= L->prox){
//        if(n==i) return L->item;
//     }
//     return '\0';
// }


char enesimo(Item n, Lista L){
    if(L== NULL) return '\0';
    if (n == 1) return L->item;
    return enesimo(n - 1, L->prox);
}