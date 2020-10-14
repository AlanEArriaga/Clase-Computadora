#include "Laboratorio.h"

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregaComputadora(const Computadora &c){
    if(cont < 5){
        arreglo[cont] = c;
        cont++;
    }
    else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar(){
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout<<"SISTEMA OPERATIVO: "<<arreglo[i].getSistema()<<endl;
        cout<<"MARCA: "<<arreglo[i].getMarca()<<endl;
        cout<<"RAM: "<<arreglo[i].getRam()<<" GB"<<endl;
        cout<<"CAPACIDAD: "<<arreglo[i].getCapacidad()<<" GB"<<endl<<endl;
    }
}
