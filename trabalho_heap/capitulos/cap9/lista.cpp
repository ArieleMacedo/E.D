#include <stdio.h>
#include <iostream>
#define fmt "%d"
using namespace std;

typedef int Item;
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
       cout<<L->item<<endl;
       L=L->prox;
    }
}
main(){
    Lista l;
    l= incluir(1,NULL);
    l=incluir(2,l);
    l = incluir(3,l);

    Lista atual = l;
    while (atual != NULL){
        cout<<atual->item<<endl;
        atual= atual ->prox;
    }

    exibir(l);
}