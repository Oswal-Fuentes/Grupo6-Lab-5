#include "Administrador.h"

Administrador::Administrador(int cant_empleados_cotratados,int cant_empleados_despedidos):
Usuario(año_contratacion, sueldo,username,password, nombre, edad, id,telefono){
    this->cant_empleados_cotratados=cant_empleados_cotratados;
    this->cant_empleados_despedidos=cant_empleados_despedidos;
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
