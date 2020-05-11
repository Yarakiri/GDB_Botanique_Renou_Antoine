#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "Botaniste.h"
#include "Plante.h"
#include "Plante.cpp"

using namespace std;

Botaniste::Botaniste(string nom) : _argent(0), _engrais(0), _nom(nom){
};

void Botaniste::arroser(Plante &cible)
{
    cible.arroser();
    cout << _nom + " arrose la plante" << endl;
};

void Botaniste::tailler(Plante &cible)
{
    cible.tailler();
    cout << _nom + " taille la plante " << endl;
};

void Botaniste::engrainner(Plante &cible)
{
    cible.engrainner();
    _engrais -= 1;
    cout << _nom + " donne de l'engrais à la plante " << endl;
};

void Botaniste::vendre(Plante &cible)
{    _argent += 15;
    cout << "Vous avez vendu une plante " << endl;
};







#endif