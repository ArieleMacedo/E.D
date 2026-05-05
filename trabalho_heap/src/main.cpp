#include <iostream>
#include "heap.h"

int main() {
    MaxHeap hospital;
    hospital.inserir({10, 1, "Paciente Camila"});
    hospital.inserir({100, 2, "Paciente Ariele"});
    hospital.inserir({100, 3, "Paciente Raquel"});
    hospital.inserir({100, 4, "Paciente sousa"});

    std::cout << "Proximo atendimento: " << hospital.remover().dado << std::endl;
    std::cout << "Proximo atendimento: " << hospital.remover().dado << std::endl;
    std::cout << "Proximo atendimento: " << hospital.remover().dado << std::endl;
    std::cout << "Proximo atendimento: " << hospital.remover().dado << std::endl;
    
    
    return 0;
}