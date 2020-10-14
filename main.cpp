//Alan Abraham Echeveste Arriaga
#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{
    Computadora c1 = Computadora("Windows", "HP", 8, 500);

    Computadora c2; // =Computadora();
    c2.setSistema("Windows");
    c2.setMarca("asRock");
    c2.setRam(16);
    c2.setCapacidad(2150);

    Computadora c3;
    c3.setSistema("ios");
    c3.setMarca("mac");
    c3.setRam(16);
    c3.setCapacidad(1000);


    /*cout<<c2.getSistema()<<endl;
    cout<<c2.getMarca()<<endl;
    cout<<c2.getRam()<<endl;
    cout<<c2.getCapacidad()<<endl;*/

    Laboratorio lb;

    lb.agregaComputadora(c1);
    lb.agregaComputadora(c2);
    lb.agregaComputadora(c3);



    //cout << c1;

    Computadora c4;
    cin>>c4;

    lb.agregaComputadora(c4);
    lb.mostrar();

    return 0;
}
