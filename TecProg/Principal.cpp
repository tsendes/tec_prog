#include "stdafx.h"
#include "Principal.h"

using std::cout;
using std::endl;
using std::cin;

Principal::Principal()
{
	Simao.Inicializa(3, 10, 1976, (char*)"Jean Simao");
	Einstein.Inicializa(14, 3, 1879, (char*)"Albert Einstein");
	Newton.Inicializa(4, 1, 1643, (char*)"Isaac Newton");

	cout << "Informe o dia/mes/ano." << endl;
	cin >> diaAtual >> mesAtual >> anoAtual;

	Executar();

}

void Principal::Executar()
{
	Simao.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Einstein.Calc_Idade(diaAtual, mesAtual, anoAtual);
	Newton.Calc_Idade(diaAtual, mesAtual, anoAtual);

	UTFPR.setNome((char*)"UTFPR");

	Simao.setUnivFiliado(&UTFPR);
}

Principal::~Principal()
{
	//faz nada
}
