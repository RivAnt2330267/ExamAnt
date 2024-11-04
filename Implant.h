#pragma once
#include <string>
using std::string;

class Implant
{
	enum Corp
	{
		Buste,
		Bras,
		Jambre
	};
protected:
	string nom;
	enum Corp partiCorp;
	int rarete;
	int prix;

public:
	Implant();
	Implant(int partiCorp, int rarete, int prix);
	~Implant();

	enum Corp getPartieCorp();
	int getRarete();
	int getPrix();

	string to_string();
};
