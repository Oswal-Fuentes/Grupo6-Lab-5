#include "Cliente.h"
#include <string>
<<<<<<< HEAD
Cliente::Cliente(string direccion,int rating):Usuario (username,password,nombre,edad,id,telefono){
=======
Cliente::Cliente(string direccion,int rating,username,password,nombre,edad,id,telefono){

>>>>>>> 1ed07187102501cb54bc349a7c2113807a222390
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
