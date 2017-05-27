#include "Cliente.h"
#include <string>
#include "Usuario.h"

Cliente::Cliente(string direccion,int rating,string username,string password,string nombre,
	int edad,string id,string telefono){
	this->direccion=direccion;
	this->rating=rating;
	this->username=username;
	this->password=password;
	this->nombre=nombre;
	this->edad=edad;
	this->id=id;
	this->telefono=telefono;
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
