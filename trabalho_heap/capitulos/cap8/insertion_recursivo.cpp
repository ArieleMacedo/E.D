#include <iostream>
#include <stdio.h>

using namespace std;

void insere(int x, int v[], int n){
    while (n > 0 && x < v[n-1]){
        v[n] = v [n-1];
        n--;
    }
    v[n] = x;
}

void insertionSort(int v[], int n) {
    if (n <= 1) {
        return;
    }
    
    insertionSort(v, n - 1);

    int ultimo = v[n -1];

    insere(ultimo, v, n - 1); 
}