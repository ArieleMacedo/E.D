#include <iostream>
#include <stdio.h>

using namespace std;
#define troca(a,b){int temp=a; a=b; b=temp;}

int seleciona(int v[], int n) {
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[max_idx]) {
            max_idx = i;
        }
    }
    return max_idx; 
}
void selectionSort(int v[], int n) {
    if (n <= 1) {
        return;
    }
    
    int max_idx = seleciona(v, n);

    if (max_idx != n - 1) {
        troca(v[max_idx], v[n - 1]);
    }
    
    selectionSort(v, n - 1);
}