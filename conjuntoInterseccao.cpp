#include <iostream>
using namespace std;

void exibirConjunto(int lista[], int tam){
	for(int i = 0; i < tam;i++){
		if(lista[i] > 0) cout << lista[i] << " ";
	}
	cout << endl;
}

void fazerInteseccao(int conjA[], int conjB[], int tam, int result[]){
	int index = 0;
	for(int i = 0; i < tam;i++){
		for(int x = 0; x < tam;x++){
			if(conjA[i] == conjB[x]){
				result[index] = conjA[i];
				index++;
			}
		}
	}
}

int main(){
	int interseccao[] = {0,0,0,0,0};
	int conjuntoA[] = {1,2,3,4,5}, conjuntoB[] = {2,5,6,7,8};
	cout << "A intersecção do conjunto ";
	exibirConjunto(conjuntoA, 5);
	cout << "com o conjunto ";
	exibirConjunto(conjuntoB, 5);
	fazerInteseccao(conjuntoA, conjuntoB, 5, interseccao);
	exibirConjunto(interseccao, 5);

	return 0;
}
