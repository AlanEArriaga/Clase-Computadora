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

    void setSistema(const string &v);
    string getSistema();

    void setMarca(const string &v);
    string getMarca();

    void setRam(int v);
    int getRam();

    void setCapacidad(int v);
    int getCapacidad();
};


#endif // COMPUTADORA_H_INCLUDED
