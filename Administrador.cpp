#include "Administrador.h"
#include "Personal.h"

Administrador::Administrador(int cant_empleados_cotratados,int cant_empleados_despedidos,
	int ano_contratacion,int sueldo,string username,string password,string nombre,int edad,string id,string telefono){
	this->cant_empleados_cotratados=cant_empleados_cotratados;
	this->cant_empleados_despedidos=cant_empleados_despedidos;
	this->ano_contratacion=ano_contratacion;
	this->sueldo=sueldo;
	this->username=username;
	this->password=password;
	this->nombre=nombre;
	this->edad=edad;
	this->id=id;
	this->telefono=telefono;
}
Administrador::Administrador(){

}void Administrador::setCant_empleados_cotratados(int cant_empleados_cotratados){
	this-> cant_empleados_cotratados=cant_empleados_cotratados;
}
int Administrador::getCant_empleados_cotratados(){
	return cant_empleados_cotratados;
}
void Administrador::setCant_empleados_despedidos(int cant_empleados_despedidos){
	this-> cant_empleados_despedidos=cant_empleados_despedidos;
}
int Administrador::getCant_empleados_despedidos(){
	return cant_empleados_despedidos;
}
