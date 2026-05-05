#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <string>

struct Elemento {
    int prioridade;
    int ordemChegada;
    std::string dado;

    bool temMaiorPrioridade(const Elemento& outro) const;
};

class MaxHeap {
private:
    std::vector<Elemento> v; 
    int indicePai(int i);
    int indiceEsquerda(int i);
    int indiceDireita(int i);
    void heapifyDown(int i); 
    void heapifyUp(int i);

public:
    void inserir(Elemento e); 
    Elemento remover();   
    void buildHeap(std::vector<Elemento> novoVetor); 
    bool estaVazia();
};

#endif