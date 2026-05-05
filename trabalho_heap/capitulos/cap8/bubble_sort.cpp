#include <iostream>
#include <stdio.h>

using namespace std;
#define troca(a,b){int x=a; a=b; b=x;}

void bubble_sort(int v[], int n){

    for (int i = 1; i<= n-1; i++){
        int trocou = 0;

        for (int j=0; j<n-i; j++){
            if(v[j]> v[j+1]){
                troca(v[j], v[j+1]);
                trocou = 1;
            }
        }
        if (trocou ==0){
        cout<< "Esse vetor esta organizado apas "<<i<< " varredura(s).\n";
        return;
        }
    }
}

int main(){
    int vetor[]= {1,2,3};
    int tam = sizeof(vetor)/ sizeof(vetor[0]);
    cout << "Array Original: ";
    for (int val: vetor) cout << val << " ";
    putchar('\n');

    bubble_sort(vetor, tam);

    cout << "Array Ordenado: ";
    for (int val: vetor ) cout << val<< " ";
    putchar('\n');

    return 0;
}