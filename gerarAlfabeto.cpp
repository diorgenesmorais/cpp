#include <iostream>
using namespace std;

int main(){
	int index = 0;
	int inicio, fim;

	cout << "Escolha como deseja exibir:\n 0 para minúsculo\n 1 para maiúsculo\n";
	cin >> index;

	if(index < 0 || index > 1){
		cout << "você não escolheu um número entre 0 e 1\n";
		return 0;
	}

	if(index == 0){
		inicio = 97;
		fim = 122;
	} else {
		inicio = 65;
		fim = 90;
	}
	
	for(char ch = inicio; ch <= fim;ch++){
		cout << ch << " ";
	}
	cout << endl;
	return 0;
}
