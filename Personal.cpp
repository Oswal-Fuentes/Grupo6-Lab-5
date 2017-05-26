#include "Personal.h"
#include <string>
Personal::Personal(int año_contratacion,int sueldo):
Usuario(año_contratacion, sueldo,username,password, nombre, edad, id,telefono){
   	this->año_contratacion=año_contratacion;
   	this->sueldo=sueldo;
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
