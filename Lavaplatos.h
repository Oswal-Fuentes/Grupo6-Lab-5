#include <iostream>
#include <string>

using namespace std;

#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
class Lavaplatos:public Personal{
    protected:
        int nivel_motivacion;
    public:
        Lavaplatos(int,int,int,string,string,string,int,string,string);
        Lavaplatos();
        int getNivel_motivacion();
        void setNivel_motivacion(int);

};
#endif