#include <iostream>

int linear_search(int x, int v[], int n){
    for (int i= 0; i< n; i++){
        if (x == v[i]){
            return 1;
        }
    }
    return 0;
}