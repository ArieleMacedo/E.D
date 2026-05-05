#include "../cap1/pilha.h"
#include <stdio.h>
#include <ctype.h>
#include "fila.h"

int main(void){
    char s[256];
    Fila F = fila(256);
    Pilha P = criar_pilha(256);

    printf("\nFrase: ");
    fgets(s, sizeof(s), stdin);

    for (int i=0;s[i];i++){
        if(isalpha(s[i])){
            char c = toupper(s[i]);
            enfileira(c,F);
            empilha(c,P);
        }
    }

    int palindromo = 1;
    while(!vazia(F)) {
        if (desenfileira(F) != desempilha(P)){
            palindromo = 0;
            break;
        }
    }

    if (palindromo) puts ("A frase e palindroma");
    else puts("A frase nao e palindroma");

    destroi(&F);
    destroi_pilha(&P);
    return 0;

}
