/**
 * bubble sort
 *
 * @autor Diorgenes Morais
 */
#include <stdio.h>

void imprimir(int array[], int tamanho){
	for(int i = 0; i < tamanho;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void bubbleSort(int array[], int tam){
	int i, j, aux;
	for(j=(tam-1); j>=1;j--){
		for(i=0; i<j;i++){
			if(array[i] > array[i+1]){
				aux = array[i];
				array[i] = array[i+1];
				array[i+1] = aux;
			}
		}
	}
}

int main(){
	int array[] = {10, 8, 2, 6, 3};
	imprimir(array, 5);

	bubbleSort(array, 5);
	imprimir(array, 5);

	return 0;
}
