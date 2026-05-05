#include <iostream>
#include <stdio.h>

using namespace std;
#define troca(a,b){int temp=a; a=b; b=temp;}

void empurra(int v[], int n) {

    for (int i = 0; i < n - 1; i++) { 
        if (v[i] > v[i+1]) {
            troca(v[i], v[i+1]);
        }
    }
}

void bubbleSort(int v[], int n) {
    if (n <= 1) {
        return;
    }
    empurra(v, n); 
    bubbleSort(v, n - 1); 
}