/**
 * Calcular o fatorial de um número natural usando recursividade
 * baseado no livro: Matemática discreta e suas aplicações - Kenneth H. Rosen 6ª ed. pág. 312
 *
 * Nota: para usar uma função com recursividade deve ser declarada o seu escopo
 * @autor Diorgenes Morais
*/
#include <iostream>
using namespace std;

unsigned int fatorial(unsigned short);

bool isNatural(int n){
     return (n > -1);
}

int main(){
     short natural = 0;     
     cout << "Calcule o fatorial de um número (n!)\nInforme um número inteiro: ";
     cin >> natural;
     if(!isNatural(natural)){
          cout << "O número informado não é natural\n";
          return 1;
     }
     cout << "Fatorial de " << natural << "! = " << fatorial(natural) << endl;

     return 0;
}

unsigned int fatorial(unsigned short n){
	return (n == 0) ? 1 : n * fatorial(n - 1);
}
