#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
using namespace std;

class Computadora{

    string sistema;
    string marca;
    int ram;
    int capacidad;

public:
    Computadora();
    Computadora(const string &sistema, const string &marca, int ram, int capacidad);
};


#endif // COMPUTADORA_H_INCLUDED
