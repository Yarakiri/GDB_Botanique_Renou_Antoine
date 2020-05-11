#ifndef PLANTE_H
#define PLANTE_H

#include <string>


class Plante{

  private:
    int _maturite;
    int _sante;
    int _hydratation;
    std::string _nom;

 
  public:
  
    void engrainner();
    void arroser();
    void tailler();
    void pousser();

    void afficher();
    
    Plante(std::string name);
    
};

#endif