#include <iostream>
using namespace std;

int main(){
	string manipular = "Altere a frase informada";
	cout << manipular << endl;
	getline(cin, manipular);
	cout << "Você alterou a variável: \"manipular\"\n" << manipular << endl;

	return 0;
}
