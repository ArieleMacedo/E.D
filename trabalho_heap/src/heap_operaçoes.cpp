#include <iostream>
#include <vector>
using namespace std;

int pai(int i)      { return (i - 1) / 2; }
int filhoEsq(int i) { return 2 * i + 1;   }
int filhoDir(int i) { return 2 * i + 2;   }

void imprimir(const vector<int>& h) {
    for (int i = 0; i < h.size(); i++)
        cout << h[i] << " ";
    cout << "\n";
}

void heapify(vector<int>& h, int n, int i) {
    int maior = i;
    int esq = filhoEsq(i);
    int dir = filhoDir(i);

    if (esq < n && h[esq] > h[maior]) maior = esq;
    if (dir < n && h[dir] > h[maior]) maior = dir;

    if (maior != i) {
        swap(h[i], h[maior]);
        heapify(h, n, maior);
    }
}
void heapifyUp(vector<int>& h, int i) {
    while (i > 0 && h[pai(i)] < h[i]) {
        swap(h[i], h[pai(i)]);
        i = pai(i);
    }
}
void buildHeap(vector<int>& h) {
    for (int i = h.size()/2 - 1; i >= 0; i--)
        heapify(h, h.size(), i);
}

void inserir(vector<int>& h, int valor) {
    h.push_back(valor);
    int i = h.size() - 1;
    heapifyUp(h, i);
}

int remover(vector<int>& h) {
    int raiz = h[0];
    h[0] = h.back();
    h.pop_back();
    heapify(h, h.size(), 0);
    return raiz;
}

int main() {
    vector<int> heap = {90, 70, 80, 40, 60, 80, 30};

    // buildHeap(heap);
    imprimir(heap);

    inserir(heap, 100);
    imprimir(heap);

    // remover(heap);
    // imprimir(heap);

    return 0;
}