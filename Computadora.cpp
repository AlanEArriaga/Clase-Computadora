#include "Computadora.h"

Computadora::Computadora(){


}

Computadora::Computadora(const string &sistema, const string &marca, int ram, int capacidad){

    this->sistema = sistema;
    this->marca = marca;
    this->ram= ram;
    this->capacidad = capacidad;
}
