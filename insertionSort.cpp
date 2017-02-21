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
	for(i = 1; i < tamanho;i++){
		j = i;
		while(j > 0 && array[j - 1] > array[j]){
			temp = array[j];
			array[j] = array[j - 1];
			array[j - 1] = temp;
			j--;
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
