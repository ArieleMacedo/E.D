#include <iostream>
#include <stdio.h>

using namespace std;

void intercala(int v[], int p, int m, int u){
    // int *w = (int *)malloc((u-p+1) *sizeof(int));
    int tam = u - p + 1;
    int *w = new int[tam]; // vetor auxiliar

    if (w == NULL) abort();
    int i = p; //percorre a primeira metade [p..m]
    int j = m+1; // percorre a segunda metade [m+1..u]
    int k = 0; // posicao em w

    while (i <= m && j <= u){
        if (v[i] < v[j]){
            w[k++] = v[i++];
        }else{
            w[k++] = v[j++];
        }
    }
    while(i<=m) w[k++] = v[i++];

    while(j<=u) w[k++] = v[j++];

    for (k=0; k<= u-p; k++) v[p+k] = w[k];

    delete[]w;
    }

void merge_sort(int v[], int p, int u){
    if (p == u) return;
    int m = (p + u) / 2;
    merge_sort(v,p,m);
    merge_sort(v,m+1,u);
    intercala(v,p,m,u);
}