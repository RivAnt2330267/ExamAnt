#include "Cyborg.h"
#include <iostream>

Cyborg::Cyborg(int num, int force, int vitesse, int def, int prix, int caraSpe)
{

}
Cyborg::~Cyborg()
{
	for (Implant* implant : imps)
	{
		delete implant;
	}
}

void Cyborg::afficherImplant()
{
	for (Implant* implant : imps)
	{
		std::cout << implant->to_string() << "\n";
	}
}

void Cyborg::ajouterImplant(Implant* implant)
{
	imps.push_back(implant);
}

Cyborg::getRandomStat()
{
	int min = 1;
	int max = 100;

	int num = 0;
	int force = 0;
	int vitesse = 0;
	int def = 0;
	int prix = 0;
	int caraSpe = 0;

	int chance = (rand() % (max - min + 1)) + min;

	if (chance >= 1 && chance <= 75)
	{
		num = 10+chance;
		force = (rand() % (10 - 1 + 1)) + 1;
		vitesse = (rand() % (10 - 1 + 1)) + 1;
		def = (rand() % (10 - 1 + 1)) + 1;
		prix = (rand() % (10 - 1 + 1)) + 1;
		caraSpe = (rand() % (4 - 1 + 1)) + 1;
	}
	else if (chance > 75 && chance <= 90)
	{
		num = 20 + chance;
		force = (rand() % (20 - 10 + 1)) + 10;
		vitesse = (rand() % (20 - 10 + 1)) + 10;
		def = (rand() % (20 - 10 + 1)) + 10;
		prix = (rand() % (20 - 10 + 1)) + 10;
		caraSpe = (rand() % (4 - 0 + 1)) + 0;
	}
	else
	{
		num = 30 + chance;
		force = (rand() % (30 - 20 + 1)) + 20;
		vitesse = (rand() % (30 - 20 + 1)) + 20;
		def = (rand() % (30 - 20 + 1)) + 20;
		prix = (rand() % (30 - 20 + 1)) + 20;
		caraSpe = (rand() % (4 - 0 + 1)) + 0;
	}
	Cyborg* cyborg(0);
	cyborg = new Implant(num, force, vitesse, def, prix, caraSpe);
	return cyborg;
}