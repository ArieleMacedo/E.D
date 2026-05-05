#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void insere(char x[], char v[][50], int n){
    while (n > 0 && strcmp(x, v[n-1]) < 0){
        strcpy(v[n], v [n-1]);
        n--;
    }
    strcpy(v[n], x);
}

void insertion_sort(char v[][50], int n){
    char aux[50];
    for (int i=0; i< n; i++){
        strcpy(aux, v[i]);
        insere(aux,v,i);
    }
}
int main(){
    char vetor[][50]= {"pedro", "ana", "felipe"};
    int tam = sizeof(vetor)/ sizeof(vetor[0]);
    cout << "Array Original: ";
    for (int i = 0; i < tam; i++) cout << vetor[i] << "|";
    putchar('\n');

    insertion_sort(vetor, tam);

    cout << "Array Ordenado: ";
    for (int i = 0; i < tam; i++) cout << vetor[i] << "|";

    return 0;
}