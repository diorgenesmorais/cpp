#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX_LISTA 10 // tamanho máximo da lista

bool inserir(float lista[], float valor, int &posUltimoElem){
	if(posUltimoElem > -1 && posUltimoElem < MAX_LISTA){
		lista[posUltimoElem] = valor;
		posUltimoElem++;
		return true;
	}
	return false;
}

void resultado(bool result){
	printf("%s\n", result ? "Inserção efetuada com sucesso!" : "lista cheia");
}

int main(){
	float listaNotas[MAX_LISTA]; // lista linear sequencial
	int posUltimoElemLista = 0;
	float nota = 0;
	char continuar = 's';
	
	while(continuar == 's'){
		cout << "Digite a sua nota: ";
		cin >> nota;
		resultado(inserir(listaNotas, nota, posUltimoElemLista));
		cout << "Deseja continuar? S/n ";
		cin >> continuar;
	}

	return 0;
}
