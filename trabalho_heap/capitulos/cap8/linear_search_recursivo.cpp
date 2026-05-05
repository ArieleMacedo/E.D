#include <iostream>
#include <stdio.h>
using namespace std;

int linear_search_rec(int x, int v[], int n) {
    if (n == 0) {
        return 0;   // vetor vazio, não achou
    }

    if (v[n - 1] == x) {
        return 1;   // achou no último
    }

    return linear_search_rec(x, v, n - 1);  // procura no resto
}
