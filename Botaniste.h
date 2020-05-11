#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include "Plante.h"

class Botaniste {

    private:

    std::string _nom;
    int _engrais;
    int _argent;


    public:

       
        void arroser(Plante &cible);
        void tailler(Plante &cible);
        void engrainner(Plante &cible);
        void vendre(Plante &cible);
 //       void dormir();//
        Botaniste(std::string nom);
};

#endif