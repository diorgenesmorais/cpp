#include <iostream>
#include <cstdlib>
#define TAM 100

using namespace std;

void push(float p[], int &t, float v){
	if(t == TAM){
		cout << "\nATENÇÃO! Pilha cheia!\n";
	} else {
		t++;
		p[t] = v;
		cout << "\tIndice: " << t+1 << endl;
	}
}

float pop(float p[], int &t){
	float v;
	if(t == -1){
		cout << "\nATENÇÃO! Pilha vazia!\n";
		return 0;
	} else {
		v = p[t];
		t--;
		return v;
	}
}

int main(){
	int t = -1;
	float a, b, p[TAM];
	char s[10];	
	system("color fl");
	cout << "\n*****************************************************";
	cout << "\n*	Calculadora para quatro operações pos-fixa     *";
	cout << "\n*		Digite numeros ou operadores	       *";
	cout << "\n*			Digite s para sair             *";
	cout << "\n*****************************************************\n";
	
	do {
		cout << ": ";
		cin >> s;
		switch (s[0]) {
			case '+':
				a = pop(p, t);
				b = pop(p, t);
				cout << "\n" << a+b;
				push(p, t, a+b);
				break;
			case '-':
				a = pop(p, t);
				b = pop(p, t);
				cout << "\n" << b-a;
				push(p, t, b-a);
				break;
			case '*':
				a = pop(p, t);
				b = pop(p, t);
				cout << "\n" << a*b;
				push(p, t, b*a);
				break;
			case '/':
				a = pop(p, t);
				b = pop(p, t);
				if(a == 0){
					cout << "\nDivisão por zero\n";
				} else {
					cout << "\n" << b/a;
					push(p, t, b/a);
				}
				break;
			default: push(p, t, atof(s));
		}
	} while (s[0] != 's');

	return 0;
}
