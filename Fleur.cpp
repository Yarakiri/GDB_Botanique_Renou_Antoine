#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include "Fleur.h"
#include "Plante.h"


using namespace std;

Fleur::Fleur(string nom) :  _maturite(0), _etat(0), _sante(10) {
 };

    void Plante::pousser(){
     if (_maturite > 8) {
         if(_maturite += 1){
         void Fleur::eclosion(){
            _etat += 1;
            if(etat > 3){
                _sante -= 10;             
            }
         };
         }
     } else if (_sante <= 0) {
        cout << _nom << " est morte.." << endl;
     }   
    };
    
   
    void Fleur::afficher(){
        cout << "Maturité : " << _maturite << endl;
        cout << "Santé : " << _sante << endl;
        cout << "Etat : " << _etat << endl;
    };




#endif