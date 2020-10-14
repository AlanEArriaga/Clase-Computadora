#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
#include <iomanip>
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


    friend ostream& operator<<(ostream &out, const Computadora &c){
        out << left;
        out << setw(10) << c.sistema;
        out << setw(10) << c.marca;
        out << setw(6) << c.ram;
        out << setw(6) << c.capacidad;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Computadora &c){
        /*string temp;
        int tempoInt;*/
        cout << "Sistema operativo: ";
        getline(cin, c.sistema);

        cout << "Marca: ";
        getline(cin, c.marca);

        cout << "Memoria Ram en GB: ";
        cin>> c.ram;

        cout << "Capacidad en GB: ";
        cin>> c.capacidad;
        return in;
    }
};


#endif // COMPUTADORA_H_INCLUDED
