#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal: public Usuario{
protected:
    int ano_contratacion;
    int sueldo;
public:
    Personal(int ,int,string,string,string ,int ,string ,string);
    Personal();
    int getAno_contratacion();
    void setAno_contratacion(int);

    int getSueldo();
    void setSueldo(int);

};
#endif