/**
 * Exemplo de struct
 * @autor Diorgenes Morais
 */
#include <iostream>
using namespace std;

struct aluno {
	char nomeAluno[31], disc[21];
	long long int matric, tel;
	float av1, av2, av3, media;
	int turma;
};

void exibir(aluno a){
	cout << "Aluno: " << a.nomeAluno << endl;
	cout << "Disciplina: " << a.disc << endl;
	cout << "Matricula: " << a.matric << endl;
	cout << "Tel: " << a.tel << endl;
	cout << "AV1: " << a.av1 << "\nAV2: " << a.av2 << "\nAV3: " << a.av3 << endl;
	cout << "Média: " << a.media << "\nTurma: " << a.turma << endl;
}

int main(){
	aluno diorgenes = {"Diorgenes", "Extrutura_de_dados", 201699999999, 81999999999, 8, 0, 0, 0, 9008};
	exibir(diorgenes);
	aluno laudeci = diorgenes;
	cout << "\nInforme o nome do aluno: ";
	cin.getline(laudeci.nomeAluno, 31);
	exibir(laudeci);
	return 0;
}
