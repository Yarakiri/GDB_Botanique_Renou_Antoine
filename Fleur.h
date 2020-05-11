#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"


class Fleur{

  private:
    int _maturite;
    int _etat;
    int _sante;
 
  public:
    void pousser();
    void eclosion();
    void afficher();
    
    Fleur(std::string name);
    
};

#endif