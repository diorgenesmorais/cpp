/**
 * LE - lista encadeada
 * SO: Linux
 * Data: 26/05/2017
 * @autor Diorgenes Morais
 * @version 1.0.0
 */
#include <iostream>
#include <stdlib.h> /* exit, EXIT_FAILURE */

using namespace std;

struct nodo{
	int info;
	struct nodo *link;
};

struct node{
	int num;
	node *prox;
};

/**
 * Exibe a lista encadeada usando está lógica:
 * cout << "\nValor do 1º nó: " << lista->num << endl;
 * cout << "\nValor do 2º nó: " << lista->prox->num << endl;
 * cout << "\nValor do 3º nó: " << lista->prox->prox->num << endl;
 * ...
 */
void exibir(node *p){
	int n = 0;
	cout << "Exibir lista encadeada..." << endl;
	while(p){
		n++;
		cout << "Valor do " << n << "º nó: " << p->num << endl;
		p=p->prox;
	}
}

node* inserirNaFrente(node* p, int valor){
	/* o método nothrow é para o caso da alocação de memória falhar
	   ele deixa o ponteiro como NULL */
	node *novo = new (nothrow) node;
	if(!novo){
		cout << "Não foi possível alocação de memória" << endl;
		exit(EXIT_FAILURE);
	}
	novo->num = valor;
	novo->prox = p;
	return novo;
}

/**
 * Inserir no fim da lista
 * se for chamado 3 vezes seria o mesmo que:
 *
 * 	lista->num = 23;
 *	lista->prox = new (nothrow) node;
 *	lista->prox->num = 13;
 *	lista->prox->prox = new (nothrow) node;
 *	lista->prox->prox->num = 18;
 *	lista->prox->prox->prox = NULL;
 */
node* inserirNoFim(node* p, int valor){
	node *novo, *aux;
	novo = new (nothrow) node;
	if(!novo){
		cout << "Não foi possível alocar memória" << endl;
		exit(EXIT_FAILURE);
	}
	novo->num = valor;
	novo->prox = NULL;
	if(!p){
		p = novo;
	}else{
		aux = p;
		while(aux->prox) 
			aux = aux->prox;
		aux->prox = novo;
	}
	return p;
}

/**
 * Busca sequencial - percorre toda a lista (se necessário) até encontrar o valor
 * @param p - ponteiro (lista)
 * @param valor - passagem por valor
 * @param pos - passagem por referência - para ser alterada internamente
 *
 * @return 1 se encontrar o valor na lista, 0 se não encontrar
 */
int buscaSequencial(node* p, int valor, int &pos){
	while(p){
		pos++;
		if(p->num == valor)
			return 1;
		p = p->prox;
	}
	return 0;
}

/**
 * Substituir um valor na lista encadeada (LE)
 * @param p - lista
 * @param posicao - posição à substituir
 * @param novoValor - novo valor
 */
void substituir(node* p, int posicao, int novoValor){
	int index = 1;
	while(index != posicao){
		p = p->prox;
		index++;
	}
	p->num = novoValor;
}

int main(){
	cout << "\nIntrodução a lista encadeada simples" << endl;
	// criando um nó
	nodo *no = new (nothrow) nodo;
	// atribuindo valor ao membro
	no -> info = 42;
	no -> link=NULL;
	// exibir o conteúdo
	cout << "\nO conteúdo do nó: " << no -> info << " endereço do nó: " << no << endl;
	// liberar a memória
	delete no;
	no = 0; // garantir que será liberado
	cout << "Endereço atual do nó: " << no << endl;

	cout << "\n------------------- lista com 3 nós ------------------" << endl;
	// criando uma lista encadeada
	node *lista = NULL;
	int posicao, num;
	lista = inserirNoFim(lista, 23);
	lista = inserirNoFim(lista, 13);
	lista = inserirNoFim(lista, 18);
	// exibir o endereço da lista encadeada
	cout << "\nEndereço da lista: " << lista << endl;
	// exibir os valores da lista
	exibir(lista);

	lista = inserirNaFrente(lista, 21);
	exibir(lista);

	cout << "\nInforme um número para procurar na lista: ";
	cin >> num;
	posicao = 0;
	buscaSequencial(lista, num, posicao) == 1 ? cout << "Encontrei na posição: " << posicao << endl : cout << "Não encontrei" << endl;

	cout << "\nQual a posição do nó? ";
	cin >> num;
	int outroValor;
	cout << "Qual o novo valor? ";
	cin >> outroValor;
	substituir(lista, num, outroValor);
	exibir(lista);

	// liberando os endereços
	delete lista; lista = 0; // garantir que foi liberado
	cout << "\nFim do programa!" << endl;

	return 0;
}
