#include "Computadora.h"

Computadora::Computadora(){


}

Computadora::Computadora(const string &sistema, const string &marca, int ram, int capacidad){

    this->sistema = sistema;
    this->marca = marca;
    this->ram= ram;
    this->capacidad = capacidad;
}

void Computadora::setSistema(const string &v){
    sistema = v;
}

string Computadora::getSistema(){
    return sistema;
}

void Computadora::setMarca(const string &v){
    marca = v;
}
string Computadora::getMarca(){
    return marca;
}
void Computadora::setRam(int v){
    ram = v;
}
int Computadora::getRam(){
    return ram;
}
void Computadora::setCapacidad(int v){
    capacidad = v;
}
int Computadora::getCapacidad(){
    return capacidad;
}
