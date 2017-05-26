#include "Personal.h"

Personal::Personal(int año_contratacion,int sueldo){
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
