/**
 * Exemplos de ponteiro
 *
 * @autor Diorgenes Morais
 */
#include <iostream>

using namespace std;

int main(){
	cout << "\n***** Experiências com ponteiro *****" << endl;

	cout << "\n--------------------------------------------------------------------------" << endl;
	// criando uma variável e um ponteiro
	int a = 23, *pa;
	cout << "\nO endereço de memória de \"pa\": " << pa << " e \"a\" " << &a << endl;
	pa = &a; // passando para o ponteiro o endereço de a
	cout << "\nO endereço de \"pa\" e seu conteúdo: " << pa << " = " << *pa << endl;
	++a;
	// provar que ao alterar o conteúdo de "a" reflete no ponteiro
	cout << "Incrementando a variável \"a\" o que mudou em \"pa\" " << *pa << endl;

	cout << "\n--------------------------------------------------------------------------" << endl;
	// instânciar um ponteiro como um array de inteiro
	int *pt = new (nothrow) int[3];
	// alocar valores no endereços reservado para o ponteiro "pt"
	*(pt) = 34; *(pt+1) = 55; *(pt+2) = 90;
	// exibir todo o conteúdo de "pt"
	cout << "\nConteúdo de todo o pt: 0=" << *(pt) << "\t1=" << *(pt+1) << "\t2=" << *(pt+2) << endl;
	cout << "Os endereços de pt: " << pt << "\t" << pt+1 << "\t" << pt+2 << endl;
	// liberar (retornar) o espaço de memória
	delete[] pt;
	pt = 0;
	cout << "O endereço do ponteiro \"pt\": " << pt << endl;

	cout << "\n--------------------------------------------------------------------------" << endl;
	cout << "## cria um ponteiro e depois liberar o seu endereço ##" << endl;
	int *pont = new (nothrow) int;
	*pont = 18;
	cout << "\nO endereço do ponteiro \"pont\": " << pont << " o valor: " << *pont << endl;
	delete pont; // não garante que será deletado, usar a atribuição com zero.
	pont = 0; // garante que não pode mais usar o ponteiro.
	
	cout << "\n--------------------------------------------------------------------------" << endl;
	cout << "## Criar dois ponteiros e fazer uma multiplicação dos seus valores ##" << endl;
	int *px = new (nothrow) int;
	cout << "\nO endereço do ponteiro \"px\": " << px << " o valor: " << *px << endl;
	cout << "\nInsirá um número: ";
	int *outro = new (nothrow) int;
	*outro = 2;
	cin >> *(px);
	cout << "\nO ponteiro deste endereço: " << px << " tem o valor " << *px << endl;
	cout << "O ponteiro deste endereço: " << outro << " tem o valor: " << *outro << endl;
	cout << "\nA multiplicação de px vezes outro: " << *px * *outro << endl;

	cout << "\n--------------------------------------------------------------------------" << endl;
	cout << "## Observe que o ponteiro \"pt\" recebe um novo endereço (que estava disponível) ##" << endl;
	// recriar um ponteiro
	pt = new (nothrow) int[4];
	*(pt) = 10;
	cout << "\nO novo endereço de \"pt\": " << pt << " o valor do 1º endereço: " << *(pt) << endl;
	
	// liberar os endereços
	delete pt, px, outro;
	pt = 0; px = 0; outro = 0;

	return 0;
}
