#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
class No{
	public: 
		int mat;
		char nome[23];
		No *prox; 
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
		}
};

class Lista{
	
	No *inicio,*fim;
	public:
	Lista(){
		inicio=NULL;
		fim=NULL;
	}
	void add_fim(int m, char n[23]){
        No *novo = new No(m,n);
		if (inicio == NULL){
			inicio = novo;
			fim= novo;
		}else{
			fim->prox = novo;
			fim = novo;
		} 
	}
	
	void add_inicio(int m, char n[23]){
		No *novo = new No(m,n);
		if (inicio == NULL){
			inicio = novo;
			fim = novo;
		}
		novo->prox = inicio;
		inicio = novo;
}
	void addord(int m,char n[23]){
		No *novo = new No (m,n);
		if (inicio == NULL || m < inicio->mat){
			novo->prox = inicio;
			inicio = novo;
			if (fim == NULL) fim = novo;
			return;
		}
		No *atual = inicio;
		while (atual->prox != NULL && atual->prox->mat < m)
			atual = atual->prox;

		novo->prox = atual->prox;
		atual->prox = novo;

		if (novo->prox == NULL) fim = novo;
		
	}	
		
	void mostrar(){
		No *atual = inicio;
		while (atual!=NULL){
			cout<<"\nMat:"<<atual->mat<<" Nome:"<<atual->nome;
			atual=atual->prox;
			
		}
   }
   
	void remover(int cod){
		if (inicio = NULL){
			cout<<"A lista está vazia\n";
			return;
		
		No *atual = inicio;
		No *anterior = NULL;

		while(atual != NULL && atual->mat != cod){
			atual = anterior;
			anterior = atual->prox;
		}
		if (atual == NULL) {
            std::cout << "Matrícula " << cod << " não encontrada.\n";
            return;
        }
		if (anterior = NULL){
			inicio = atual->prox;
			if (inicio = NULL){
				fim = NULL;
			}
		else{
			anterior->prox = atual->prox;
			if (atual == fim){
				fim = anterior;
			}
		}
		}
		delete atual;
		cout<< "Matricula:" << cod << ", removida com sucesso. \n";
    }
		
	}		
};

int main(){
	Lista *turma=new Lista();
	
	//turma->inv_lista2();
	
}
