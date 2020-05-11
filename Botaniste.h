#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include "Plante.h"

class Botaniste {

    private:

    std::string p_nom;
    int a_engrais;


    public:

        Botaniste(std::string nom);
        void arroser(Plante &cible);
        void tailler(Plante &cible);
        void engrainner(Plante &cible);
        std::string getNomBotaniste();
    

};

#endif