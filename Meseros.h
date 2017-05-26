#include <iostream>
#include <string>

using namespace std;

#ifndef MESEROS_H
#define MESEROS_H
class Meseros{
    protected:
        string lista_platillos;
    public:
        Meseros(string);
        Meseros();
        string getLista_platillos();
        void setLista_platillos(string);

};
#endif