#pragma once
#include "Universidade.h"

class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
	Universidade* uni;
public:
	Pessoa(int diaNa, int mesNa, int anoNa, char* nome = (char*)"");
	Pessoa();
	~Pessoa();

	void Inicializa(int diaNa, int mesNa, int anoNa, char* nome = (char*)"");
	void Calc_Idade(int diaAT, int mesAT, int anoAT);
	int informaIdade();
	void setUnivFiliado(Universidade* pu);
	void OndeTrabalho();

};


