#include <iostream>
#include <string>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H
class Usuario{
    protected:
        string username;
        string password;
        string nombre;
        int edad;
        string id;
        string telefono;
    public:
        Usuario(string,string,string,int,string,string);
        Usuario();
        string getUsername();
        void setUsername(string);

        string getPassword();
        void setPassword(string);

        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);

        string getId();
        void setId(string);

        string getTelefono();
        void setTelefono(string);

};
#endif