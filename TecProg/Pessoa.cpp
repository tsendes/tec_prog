#include "stdafx.h"
#include "Pessoa.h"


Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, char* nome)
{
	Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa()
{
	Inicializa(0, 0, 0, (char*)"");
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, char* nome)
{
	idadeP = 0;
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	strcpy_s(nomeP, nome);
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
	idadeP = anoAT - anoP;
	if (mesP < mesAT)
		idadeP -= 1;
	else
		if (mesP == mesAT)
			if (diaP > diaAT)
				idadeP -= 1;

	cout << "A idade da Pessoa " << nomeP << " seria: " << idadeP << endl;
}
int Pessoa::informaIdade()
{
	return idadeP;
}
Pessoa::~Pessoa()
{
	//nao faz nada
}

void Pessoa::setUnivFiliado(Universidade* pu)
{
	uni = pu;
}

void Pessoa::OndeTrabalho()
{
	cout << nomeP << " trabalha para a " << uni->getNome() << endl;
}