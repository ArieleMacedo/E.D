#include <stdio.h>
#include "lista.h"

int main(void){
    Lista L = incluir(3,incluir(1,incluir(5,NULL)));
    exibir_inv(L);
    return 0;
}

