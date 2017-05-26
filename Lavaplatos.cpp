#include "Lavaplatos.h"
#include "Personal.h"

Lavaplatos::Lavaplatos(int nivel_motivacion,int ano_contratacion,int sueldo,string username,
	string password,string nombre,int edad,string id,string telefono){
    this->nivel_motivacion=nivel_motivacion;
}
Lavaplatos::Lavaplatos(){

}void Lavaplatos::setNivel_motivacion(int nivel_motivacion){
   this-> nivel_motivacion=nivel_motivacion;
}
int Lavaplatos::getNivel_motivacion(){
   return nivel_motivacion;
}
