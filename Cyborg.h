#pragma once
#include "Implant.h"
#include <iostream>
#include <vector>
using std::string;

class Cyborg
{
	enum Specialite
	{
		AutoDestruction,
		Feu,
		Vol,
		Mine,
		Eau
	};
private:
	int num;
	int force;
	int vitesse;
	int def;
	int prix;
	enum Specialite caraSpe;
	std::vector<Implant*> imps;

public:
	Cyborg(int num, int force, int vitesse, int def, int prix, int caraSpe);
	~Cyborg();
	void afficherImplant();
	void ajouterImplant(Implant* implant);
	static getRandomStat()
	 
};
