/**
 * Ordenando [] (array)
 * 
 * @autor Diorgenes Morais
 */
#include <iostream>
using namespace std;

/**
 * insertion sort algorithm
 */
void insertionSortCrescente(int array[], int tamanho){
	int i, j, temp;
	for(j = 1; j < tamanho;j++){
		for(i = j; i > 0 && array[i-1] > array[i]; i--){
			temp = array[i-1];
			array[i-1] = array[i];
			array[i] = temp;
		}
	}
}

void exibirVetor(int array[], int tamanho){
	for(int i = 0; i < tamanho;i++){
		cout << array[i] << " ";
	}
	cout << endl;
}

int main(){
	int vetor[] = {10, 4, 8, 2, 9, 3};
	cout << "Vetor original:" << endl;
	exibirVetor(vetor, 6);

	cout << "Vetor ordenado com algortimo de ordenação por inserção:" << endl;
	insertionSortCrescente(vetor, 6);
	exibirVetor(vetor, 6);

	return 0;
}
