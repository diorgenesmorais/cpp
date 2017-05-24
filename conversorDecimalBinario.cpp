/**
 * Conversor decimal para binário - exemplo de pilha
 *
 * @autor Diorgenes Morais
 */
#include <iostream>
#include <cstdlib>
#define TAM 40
using namespace std;

void empilhar(int p[], int &t, int v){
	if(t == TAM){
		cout << "\nATENÇÃO! Pilha cheia!\n";
	} else {
		p[++t] = v;
	}
}

void desempilhar(int p[], int &t){
	if(t == -1){
		cout << "\nPilha vázia!" << endl;
	} else {
		while(t != -1)
			cout << p[t--];
	}
}

void exibir(int p[], int tam){
	for(int i = 0; i < tam; i++)
		cout << p[i];
	cout << endl;
}

int main(){
	int num, resto, pilha[TAM], sinal, topo = -1;
	cout << "\n=======================================================\n";
	cout << "\tConverte número da base decimal para base binária\n";
	cout << "========================================================\n";
	cout << "\nDigite um número inteiro positivo: ";
	cin >> num;
	num = abs(num);

	do {
		resto = num % 2;
		empilhar(pilha, topo, resto);
		num /= 2;
	}while(num > 0);

	cout << "\nConvertido para binário: ";
	desempilhar(pilha, topo);
	cout << "\nFim!!!\n";

	return 0;
}
