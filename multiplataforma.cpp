/* Este programa é multiplataforma (Linux/Windows)
   Autor: Diorgenes Morais
   Data criação: 6/5/2016
   Versão: 1.0.1
*/
#ifdef WIN32
#define WINDOWS true // quando usar windows
#else
#define WINDOWS false
#endif

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	if(WINDOWS){
		// ativar página de código 1252
		system("chcp 1252 > null");
	}
	short max = 32767;
	cout << "Valor maximo do short " << max << endl;
	max += 1;
	cout << "Somando + 1 = " << max << endl;
	if(WINDOWS){
        	cout<< "\n"; // acrecentado para uso no Windows           
		system("pause");
	}

	return 0;
}
