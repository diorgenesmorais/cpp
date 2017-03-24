#include <iostream>
using namespace std;

int main(){
	int a = 1, b = 1;
	bool resultado = a != b & a == b++;
	cout << "Testes usando operadores | , & , || , &&" << endl;
	cout << "O resultado do & deve ser 0: " << resultado << " ,a prova de que fez o segundo teste (b = 2)= " << b << endl;

	resultado = false && --b == a;
	cout << "A prova que não fez o 2º teste: (b == 2)= " << b << endl;

	resultado = false | a++ != b;
	cout << "A prova que executou o 2º teste (a = 2)= " << a << endl;
	int x = 3;
	long r = 1L;
	while(x-- > 0){
		r *= a;
	}
	cout << "A potência de 2³ é: " << r << endl;
	return 0;
}
