#include "Cliente.h"
#include <string>
Cliente::Cliente(string direccion,int rating,username,password,nombre,edad,id,telefono){

    this->direccion=direccion;
    this->rating=rating;
}
Cliente::Cliente(){

}void Cliente::setDireccion(string direccion){
   this-> direccion=direccion;
}
string Cliente::getDireccion(){
   return direccion;
}
void Cliente::setRating(int rating){
   this-> rating=rating;
}
int Cliente::getRating(){
   return rating;
}
