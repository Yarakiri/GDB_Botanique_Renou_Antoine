#include <iostream>
#include <string>

#include "Plante.h"
#include "Plante.cpp"
#include "Botaniste.h"
#include "Botaniste.cpp"
#include "Fleur.h"
#include "Fleur.cpp"

using namespace std;

int main()
{

Plante Piv("Pivoine");
Botaniste Art ("Arthur");

        Piv.afficher();
        Art.arroser(Plante &cible);
        Art.engrainner(Plante &cible);
        Art.tailler(Plante &cible);



        Piv.afficher();
    return 0;
}
