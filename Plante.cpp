#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include "Plante.h"


using namespace std;

Plante::Plante(string nom) : _nom(nom), _hydratation(100), _sante(100), _maturite(0) {
 };

    void Plante::arroser(){
        _hydratation += 30;
        if (_hydratation > 100) {
            cout << _nom << " se noie, attention !" << endl;
            _sante -= 20;
        }
    }

    void Plante::tailler(){
    _sante += 10;
        if (_sante > 100) {
            _sante -= 30;
            cout << _nom << " est trop coupé, attention !" << endl;
        }
    }


    void Plante::engrainner(){
    _maturite += 1;
    cout <<"Maintenant, vous ne pouvez plus engrainner aujourd'hui" << endl;
    }


    void Plante::pousser(){
     if (_sante > 50) {
        _maturite += 1;
        _hydratation -= 20; 
        _sante -= 10;
     } else if (_sante <= 0) {
        cout << _nom << " est morte.." << endl;
     }   
    }
    
   
    void Plante::afficher(){
        cout << _nom << "-> ";
        cout << "Hydratation : " << _hydratation << " ";
        cout << "Sante : " << _sante << " ";
        cout << "Maturité : " << _maturite << endl;
    };




#endif