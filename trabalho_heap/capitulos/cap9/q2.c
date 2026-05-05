#include <stdio.h>
#include "lista.h"


int ocorrencias(Item x,Lista L){
    int ocorrencia = 0;
    if (L == NULL) return 0;
    if (x == L->item){
        ocorrencia += 1;
    }
    return ocorrencia + ocorrencias(x, L->prox);

}
int main(void){
    Lista L = incluir(1,incluir(2,incluir(1,incluir(4,incluir(1,NULL)))));
    printf("Numero de ocorrencias: %d",ocorrencias(1,L));
    return 0;
}

/*com while
int ocorrencias(Item x,Lista L){
//     int ocorrencia = 0;
//     while (L != NULL){
//     if (x == L->item)
//         ocorrencia ++;
//     L= L->prox;
//     return ocorrencia;
//     }
 }
*/


/*com for
// int ocorrencias(Item x,Lista L){
//     int ocorrencia = 0;
//     for (; L != NULL; L = L->prox){
//     if (x == L->item)
//         ocorrencia ++;
//     }
//     return ocorrencia;
}
*/ 