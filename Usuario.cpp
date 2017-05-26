#include "Usuario.h"

Usuario::Usuario(string username,string password,string nombre,int edad,string id,string telefono)
:Usuario(año_contratacion, sueldo,username,password, nombre, edad, id,telefono){
    this->username=username;
    this->password=password;
    this->nombre=nombre;
    this->edad=edad;
    this->id=id;
    this->telefono=telefono;
}
Usuario::Usuario(){

}void Usuario::setUsername(string username){
   this-> username=username;
}
string Usuario::getUsername(){
   return username;
}
void Usuario::setPassword(string password){
   this-> password=password;
}
string Usuario::getPassword(){
   return password;
}
void Usuario::setNombre(string nombre){
   this-> nombre=nombre;
}
string Usuario::getNombre(){
   return nombre;
}
void Usuario::setEdad(int edad){
   this-> edad=edad;
}
int Usuario::getEdad(){
   return edad;
}
void Usuario::setId(string id){
   this-> id=id;
}
string Usuario::getId(){
   return id;
}
void Usuario::setTelefono(string telefono){
   this-> telefono=telefono;
}
string Usuario::getTelefono(){
   return telefono;
}
