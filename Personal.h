#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal: public Usuario{
    protected:
        int año_contratacion;
        int sueldo;
    public:
        Personal(int,int);
        Personal();
        int getAño_contratacion();
        void setAño_contratacion(int);

        int getSueldo();
        void setSueldo(int);

};
#endif