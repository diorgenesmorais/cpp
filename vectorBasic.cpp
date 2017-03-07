/**
 * Programa simples usando array com as funções básicas: inserir / remover
 *
 * @autor Diorgenes Morais
 */
#include <iostream>
#include <string>
using namespace std;

struct PRODUTO {
	int codigo;
	string nome;
	float valor;
};

void imprimir(PRODUTO vetor[], int tamanho){
	cout << "\n-----------------------------\nCódigo | Produto | Valor\n-----------------------------" << endl;
	for(int i = 0; i < tamanho;i++){
		if(vetor[i].nome.size() > 0){
			cout << vetor[i].codigo << " - " << vetor[i].nome << " = R$ " << vetor[i].valor << endl;
		}
	}
	cout << "-----------------------------" << endl;
}

void inserir(PRODUTO vetor[], int tamanho){
	char continuar = 's';
	int index = 0;

	while(continuar == 's'){
		if(index == tamanho){
			cout << "Estouro de pilha" << endl;
			break;			
		}
		cout << "Informe o código de produto: ";
		cin >> vetor[index].codigo;
		cout << "Nome do produto: ";
		cin >> vetor[index].nome;
		cout << "Valor do produto: ";
		cin >> vetor[index++].valor;
		cout << "Deseja continuar inserindo? s/n ";
		cin >> continuar;
	}
}

bool remover(PRODUTO vetor[], int tamanho, int codigo){
	for(int i = 0; i < tamanho;i++){
		if(vetor[i].codigo == codigo){
			vetor[i].nome = "";
			return true;
		}
	}
	return false;
}

int main(){
	PRODUTO produtos[10];
	int cod;
	string mensagem = "\n=================\n";

	inserir(produtos, 10);

	imprimir(produtos, 10);

	cout << "Informe um código para excluir: ";
	cin >> cod;
	mensagem += remover(produtos, 10, cod) ? "Produto excluido!" : "Nenhum produto encontrado!";
	cout << mensagem << endl;

	imprimir(produtos, 10);

	return 0;
}
