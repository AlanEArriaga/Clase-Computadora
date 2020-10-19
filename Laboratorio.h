#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED
#include "Computadora.h"
#include <iostream>
using namespace std;

class Laboratorio{
    Computadora arreglo[5];
    size_t cont;

public:
    Laboratorio();
    void agregaComputadora(const Computadora &c);
    void mostrar();
    void respaldar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c){

        l.agregaComputadora(c);

        return l;
    }
};


#endif // LABORATORIO_H_INCLUDED
