#include <iostream>
#include <stdio.h>
using namespace std;


#define troca(a,b){int x=a; a=b; b=x;}

int seleciona (int v[], int n){
    int i = 0;
    for (int j=1; j<n; j++){
    if (v[i]< v[j])i=j;
    }
    return i;
}

void selection_sort(int v[], int n){
    while (n> 1){
        troca(v[seleciona(v,n)], v[n-1]);
        n--;
    }
}

int main(){
    int array[] = {46,38,50,27,19};
    int tam = sizeof(array) / sizeof(array[0]);

    cout<< "Array Original: ";
    for(int val: array) cout<< val<< " ";
    putchar('\n');

    selection_sort(array, tam);
    cout<< "Array Ordenado: ";
    for(int val: array) cout<< val<< " ";
    putchar('\n');
}