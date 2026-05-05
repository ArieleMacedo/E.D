#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
class No{
	public: 
		int mat;
		char nome[23];
		No *prox, *ant; 
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);
			prox=NULL;
			ant = NULL;
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
			novo->ant = fim;
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
		inicio->ant = novo;
		inicio = novo;
}
	void addord(int m,char n[23]){
		No *novo = new No (m,n);
		if (inicio == NULL || m < inicio->mat){
			novo->prox = inicio;
			if (inicio != NULL){
				inicio->ant = novo;
			}
			inicio = novo;
			if (fim == NULL) fim = novo;
			return;
		}
		No *atual = inicio;
		while (atual->prox != NULL && atual->prox->mat < m)
			atual = atual->prox;

		novo->prox = atual->prox;
		novo->ant = atual;
		atual->prox = novo;

		if (novo->prox == NULL) {
			fim = novo;
		}else{
			novo->prox->ant = novo;
			};
		
	}	
		
	void mostrar(){
		No *atual = inicio;
		while (atual!=NULL){
			cout<<"\nMat:"<<atual->mat<<" Nome:"<<atual->nome;
			atual=atual->prox;
			
		}
   }
   
	void remover(int cod){
		if (inicio == NULL){
			cout<<"A lista está vazia\n";
			return;
		
		No *atual = inicio;

		while(atual != NULL && atual->mat != cod){
			atual = atual->prox;
		}

		if (atual == NULL) {
            std::cout << "Matrícula " << cod << " não encontrada.\n";
            return;
        }

		if (atual->ant != NULL){
			atual->ant->prox= atual->prox;
		}else{
			inicio = atual->prox;
		}

		if (atual->prox != NULL){
			atual->prox->ant = atual->ant;
		}else{
			fim = atual->ant;
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
