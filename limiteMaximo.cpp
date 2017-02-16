#include <iostream>
using namespace std;

int main(){
	// uma variável signed (pattern)
	short comNegativo = 32767;
	// definindo uma variável sem sinal
	unsigned short soPositivo = 32768 + 32767;
	cout << "Estourando uma variável\n=======================\n";
	cout << "Limite máximo de um short: " << comNegativo << endl;
	comNegativo += 1;
	cout << "Somando-se + 1, o que acontece? " << comNegativo << endl;
	cout << "Um short sem sinal (unsigned): " << soPositivo << endl;
	soPositivo += 1;
	cout << "Somando-se + 1 a ele: " << soPositivo << endl;
	cout << "\nO que queremos provar com isto é:\nO que acontece quando ultrapassamos a capacidade máxima de uma variável\n";
	cout << "Ela reseta, ou seja, volta ao valor mínimo possível nela\n";
	cout << "Em uma variável short (signed) o menor valor possível é -32768 e o maior valor é 32767\n";
	cout << "Já uma variável short (unsigned) o menor valor é 0 (zero) e o maior valor é 65535\n";

	return 0;
}
