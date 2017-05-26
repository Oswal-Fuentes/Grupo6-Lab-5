#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

#ifndef MESEROS_H
#define MESEROS_H
class Meseros:public Personal{
    protected:
        string lista_platillos;
    public:
        Meseros(string,int,int ,string,string,string,int,string,string);
        Meseros();
        string getLista_platillos();
        void setLista_platillos(string);

};
#endif