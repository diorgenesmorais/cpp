/**
 * Pesquisa binária
 *
 * @autor Diorgenes Morais
 */
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct DADOS_ALUNO {
        int codAluno;
        char nome[30];
};

struct DADOS_ALUNO aluno1;
struct DADOS_ALUNO aluno2;
struct DADOS_ALUNO aluno3;
struct DADOS_ALUNO aluno4;
struct DADOS_ALUNO aluno5;
struct DADOS_ALUNO aluno6;
struct DADOS_ALUNO aluno7;
struct DADOS_ALUNO aluno8;
struct DADOS_ALUNO alunoEncontrado;

bool pesquisaBinaria(DADOS_ALUNO alunos[], int tam, int codigo, DADOS_ALUNO &aluno){
	int meio, inf = 0, sup = tam - 1;
	while(inf <= sup){
		meio = (inf + sup) / 2;
		if(codigo == alunos[meio].codAluno){
			aluno = alunos[meio];
			return true;
		} else if(codigo < alunos[meio].codAluno){
			sup = meio - 1;
		} else {
			inf = meio + 1;
		}
	}
	return false;
}

int main(){

	aluno1.codAluno = 1;
	strcpy(aluno1.nome, "Diorgenes Morais");

	aluno2.codAluno = 2;
	strcpy(aluno2.nome, "Laudeci");

	aluno3.codAluno = 3;
	strcpy(aluno3.nome, "Dayane");

	aluno4.codAluno = 4;
	strcpy(aluno4.nome, "Deyvison");

	aluno5.codAluno = 5;
	strcpy(aluno5.nome, "Junior");

	aluno6.codAluno = 6;
	strcpy(aluno6.nome, "João");

	aluno7.codAluno = 7;
	strcpy(aluno7.nome, "Fatima");

	aluno8.codAluno = 8;
	strcpy(aluno8.nome, "Henrique");

	DADOS_ALUNO alunos[] = {aluno1, aluno2, aluno3, aluno4, aluno5, aluno6, aluno7, aluno8};

	int codigo = 0;

	printf("Digite um código: ");

	scanf("%i", &codigo);
	
	printf("%s %s\n", pesquisaBinaria(alunos, 8, codigo, alunoEncontrado) ? "Aluno encontrado:" : "not found", alunoEncontrado.nome);

	return 0;
}
