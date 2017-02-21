/**
 * Ordenando vetor
 * 
 * @autor Diorgenes Morais
 */
#include <iostream>
#include <vector>
using namespace std;

/**
 * insertion sort algorithm
 */
void insertionSortCrescente(vector<int> &vetor){
	int i, j, temp;
	for(i = 1; i < vetor.size();i++){
		j = i;
		while(j > 0 && vetor[j - 1] > vetor[j]){
			temp = vetor[j];
			vetor[j] = vetor[j - 1];
			vetor[j - 1] = temp;
			j--;
		}
	}
}

void exibirVetor(vector<int> vetor){
	for(int i = 0; i < vetor.size();i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
}

int main(){
	vector<int> myvetor (6);
	myvetor[0] = 10;
	myvetor[1] = 4;
	myvetor[2] = 8;
	myvetor[3] = 2;
	myvetor[4] = 9;
	myvetor[5] = 3;

	cout << "Vetor original:" << endl;
	exibirVetor(myvetor);

	cout << "Vetor ordenado com algortimo de ordenação por inserção:" << endl;
	insertionSortCrescente(myvetor);
	exibirVetor(myvetor);
	return 0;
}
