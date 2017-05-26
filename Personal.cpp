#include "Personal.h"
<<<<<<< HEAD

Personal::Personal(int año_contratacion,int sueldo,string username,
	string password,string nombre,int edad,string id,int telefono){
    this->año_contratacion=año_contratacion;
    this->sueldo=sueldo;
=======
#include <string>
Personal::Personal(int año_contratacion,int sueldo):
Usuario(año_contratacion, sueldo,username,password, nombre, edad, id,telefono){
   	this->año_contratacion=año_contratacion;
   	this->sueldo=sueldo;
>>>>>>> 7d0a85b135f37e1d06f9b3c13ade02e748729639
}
Personal::Personal(){

}void Personal::setAño_contratacion(int año_contratacion){
   this-> año_contratacion=año_contratacion;
}
int Personal::getAño_contratacion(){
   return año_contratacion;
}
void Personal::setSueldo(int sueldo){
   this-> sueldo=sueldo;
}
int Personal::getSueldo(){
   return sueldo;
}
