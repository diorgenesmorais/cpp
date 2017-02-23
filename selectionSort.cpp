/**
 * Ordenação por seleção
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

void selectionSort(int array[], int tamanho){
	int i, j, min, aux;
	for(i = 0; i < (tamanho-1);i++){
		min = i;
		for(j = (i+1);j < tamanho;j++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		if(i != min){
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
		}
	}	
}

int main(){
	int colection[] = {10, 8, 2, 7, 4};

	imprimir(colection, 5);
	
	selectionSort(colection, 5);
	imprimir(colection, 5);

	return 0;
}
