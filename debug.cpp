#include <iostream>
#include "Plante.h"
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    Plante * link = new Plante("Link");
    link->afficher();
    

    return 0;
}
