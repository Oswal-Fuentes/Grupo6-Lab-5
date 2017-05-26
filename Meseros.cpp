#include "Meseros.h"
#include "Personal.h"

Meseros::Meseros(string lista_platillos,int ano_contratacion,int sueldo,string username,
	string password,string nombre,int edad,string id,string telefono){
    this->lista_platillos=lista_platillos;
}
Meseros::Meseros(){

}void Meseros::setLista_platillos(string lista_platillos){
   this-> lista_platillos=lista_platillos;
}
string Meseros::getLista_platillos(){
   return lista_platillos;
}
