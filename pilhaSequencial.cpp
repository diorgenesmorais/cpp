/**
 * Teste de aplicação com pilha sequencial
 * @autor Diorgenes Morais
 */
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

#define STACK_LENGTH 5

struct PRODUTO {
	int codigo;
	char nome[30];
	float valor;	
};

bool empilhar(PRODUTO produtos[], int codigo, char nome[], float valor, int &index){
	if(index > (STACK_LENGTH - 1)){
		cout << "Stack overflow" << endl;
		return false;
	}
	produtos[index].codigo = codigo;
	strcpy(produtos[index].nome, nome);
	produtos[index].valor = valor;
	index++;
	return true;
}

void imprimir(PRODUTO produtos[], int length){
	int i = 0;
	cout << "Lista de produtos:\n";
	while(i < length){
		cout << "Código: " << produtos[i].codigo << " nome: " << produtos[i].nome << " valor: " << produtos[i].valor << endl;
		i++;
	}
}

int main(){
	PRODUTO produtos[STACK_LENGTH];
	int index = 0, codigo;
	char nome[30];
	float valor;
	bool continuar = true;

	while(continuar){
		cout << "Código: ";
		cin >> codigo;
		cout << "Nome do produto: ";
		cin >> nome;
		cout << "Valor unitário: ";
		cin >> valor;
		continuar = empilhar(produtos, codigo, nome, valor, index);
		//cout << "Deseja continar? 1/0" << endl;
		//cin >> continuar;
	}

	imprimir(produtos, index);

	return 0;
}
