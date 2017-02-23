/**
 * Pesquisa sequencial em estrutura heterogêneas.
 *
 *@autor Diorgenes Morais
 */
#include <iostream>
#include <stdio.h>
#include <string.h>

struct DADOS_ALUNO {
	int codAluno;
	char nome[30];
};

/**
 * Exibir estrutura
 */
void exibirAluno(DADOS_ALUNO aluno){
	printf("%d, %s\n", aluno.codAluno, aluno.nome);
}

/**
 * Exibir uma matrix de estrutura
 */
void imprimir(DADOS_ALUNO alunos[], int tamanho){
        for(int i = 0; i < tamanho;i++){
                exibirAluno(alunos[i]);
        }   
        printf("\n");
}

/**
 * Pesquisar por código do aluno
 *
 * @return true if found (Also returned by reference *)
 */
bool buscarPorCodigo(DADOS_ALUNO alunos[], int codAluno, int tam, DADOS_ALUNO &aluno){
	for(int i =0; i < tam;i++){
		if(codAluno == alunos[i].codAluno){
			aluno = alunos[i];
			return true;
		}
	}
	return false;
}

int main(){
	struct DADOS_ALUNO aluno1;
	struct DADOS_ALUNO aluno2;
	struct DADOS_ALUNO aluno3;
	struct DADOS_ALUNO aluno4;
	struct DADOS_ALUNO aluno5;
	struct DADOS_ALUNO aluno6;
	struct DADOS_ALUNO aluno7;
	struct DADOS_ALUNO alunoEncontrado;

	aluno1.codAluno = 2;
	strcpy(aluno1.nome, "Diogenes Morais");

	aluno2.codAluno = 5;
	strcpy(aluno2.nome, "Laudeci");

	aluno3.codAluno = 8;
	strcpy(aluno3.nome, "Dayane");

	aluno4.codAluno = 1;
	strcpy(aluno4.nome, "Deyvison");

	aluno5.codAluno = 3;
	strcpy(aluno5.nome, "Junior");

	aluno6.codAluno = 4;
	strcpy(aluno6.nome, "João");

	aluno7.codAluno = 6;
	strcpy(aluno7.nome, "Fatima");

	DADOS_ALUNO alunos[] = {aluno1, aluno2, aluno3, aluno4, aluno5, aluno6, aluno7};

	imprimir(alunos, 7);

	printf("%s\n", buscarPorCodigo(alunos, 4, 7, alunoEncontrado) ? "Encontrou..." : "Não encontrou");
	exibirAluno(alunoEncontrado);

	return 0;
}
