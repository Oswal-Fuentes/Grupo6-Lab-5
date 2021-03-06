#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador: public Personal{
    protected:
        int cant_empleados_cotratados;
        int cant_empleados_despedidos;
    public:
        Administrador(int,int,int,int,string,string,string,int,string,string);
        Administrador();
        int getCant_empleados_cotratados();
        void setCant_empleados_cotratados(int);

        int getCant_empleados_despedidos();
        void setCant_empleados_despedidos(int);

};
#endif