#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade(char* n)
{
	strcpy_s(nome, n);
}
Universidade::~Universidade()
{
	//pagod v�
}
void Universidade::setNome(char* n)
{
	strcpy_s(nome, n);
}
char* Universidade::getNome()
{
	return nome;
}