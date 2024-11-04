#include "Implant.h"

Implant::Implant() : nom("Voltige"), partiCorp(Jambre), rarete(1), recompenseOr(3), prix(300)
{

}

Implant::Implant(int partiCorp, int rarete, int prix)
{

}
Implant::~Implant()
{

}

enum Implant::Corp Implant::getPartieCorp()
{
	return partiCorp;
}

int Implant::getRarete()
{
	return rarete;
}

int Implant::getPrix()
{
	return prix;
}

string Implant::to_string()
{
	std::string info;
	std::string nomCorp;

	if (partiCorp == 0)
	{
		nomCorp = "Buste";
	}
	if (partiCorp == 1)
	{
		nomCorp = "Bras";
	}
	if (partiCorp == 2)
	{
		nomCorp = "Jambe";
	}


	info.append("Nom: " + nom + "\n");
	info.append("Partie corp: " + nomCorp + "\n");
	info.append("Niveau Rareter: " + std::to_string(rarete) + "\n");
	info.append("Prix: " + std::to_string(prix) + " $" + "\n");

	return info;
}