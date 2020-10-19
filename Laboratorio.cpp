#include "Laboratorio.h"
#include <fstream>

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
    cout << left;
    cout << setw(10) <<"Sistema";
    cout << setw(10) <<"Marca";
    cout << setw(6) <<"Ram";
    cout << setw(6) <<"Capacidad";
    cout << endl;
    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout << c;
        /*cout<<"SISTEMA OPERATIVO: "<<arreglo[i].getSistema()<<endl;
        cout<<"MARCA: "<<arreglo[i].getMarca()<<endl;
        cout<<"RAM: "<<arreglo[i].getRam()<<" GB"<<endl;
        cout<<"CAPACIDAD: "<<arreglo[i].getCapacidad()<<" GB"<<endl<<endl;*/
    }
}

void Laboratorio::respaldar_tabla(){
    ofstream archivo("Computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo << setw(10) <<"Sistema";
        archivo << setw(10) <<"Marca";
        archivo << setw(6)  <<"Ram";
        archivo << setw(6)  <<"Capacidad";
        archivo << endl;
       for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout << c;
       }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
       for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        archivo << c.getSistema()  <<endl;
        archivo << c.getMarca()    <<endl;
        archivo << c.getRam()      <<endl;
        archivo << c.getCapacidad()<<endl;
       }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int ram, capacidad;
        Computadora c;

        while(true)
        {
            getline(archivo, temp);//sistema
            if(archivo.eof()){
                break;
            }
            c.setSistema(temp);

            getline(archivo, temp);//marca
            c.setMarca(temp);

            getline(archivo, temp);//ram
            ram = stoi(temp);//string to int
            c.setRam(ram);

            getline(archivo, temp);//capacidad
            capacidad = stoi(temp); //string to int
            c.setCapacidad(capacidad);

            agregaComputadora(c);
        }

    }
    archivo.close();
}
