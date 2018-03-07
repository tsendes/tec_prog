#pragma once

class Universidade
{
private:
	char nome[30];

public:
	Universidade(char* n = (char*)"");
	~Universidade();
	void setNome(char* n);
	char* getNome();
};
