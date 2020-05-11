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
    Plante * link = new Plante("Link");
    link->afficher();
    

    return 0;
}
