#include <iostream>
#include "Implant.h"
#include "Cyborg.h"

int main()
{
    Cyborg cyborg;

    for (int i = 0; i < 19; i++)
    {
        Implant* implant;
        Cyborg* cyborg;
        cyborg.getRandomStat();
        cyborg.ajouterImplant();
    }

    std::cout << "Voici les Cyborg: \n ";
    Cyborg.afficherImplant();

}