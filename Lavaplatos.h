#include <iostream>
#include <string>

using namespace std;

#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
class Lavaplatos{
    protected:
        int nivel_motivacion;
    public:
        Lavaplatos(int);
        Lavaplatos();
        int getNivel_motivacion();
        void setNivel_motivacion(int);

};
#endif