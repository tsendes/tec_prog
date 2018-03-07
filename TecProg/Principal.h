#pragma once
#include "Pessoa.h"

class Principal
{
private:
	Pessoa Simao;
	Pessoa Einstein;
	Pessoa Newton;
	
	int diaAtual;
	int mesAtual;
	int anoAtual;
	Universidade UTFPR;
public:
	Principal();
	~Principal();
	void Executar();
};