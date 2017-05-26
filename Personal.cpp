#include "Personal.h"
#include <string>
#include "Usuario.h"

Personal::Personal(int ano_contratacion,int sueldo,string username,
	string password,string nombre,int edad,string id,string telefono){
	this->ano_contratacion=ano_contratacion;
	this->sueldo=sueldo;
}
Personal::Personal(){
	
}
void Personal::setAno_contratacion(int ano_contratacion){
	this-> ano_contratacion=ano_contratacion;
}
int Personal::getAno_contratacion(){
	return ano_contratacion;
}
void Personal::setSueldo(int sueldo){
	this-> sueldo=sueldo;
}
int Personal::getSueldo(){
	return sueldo;
}
