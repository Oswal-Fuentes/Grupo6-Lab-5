#include "Meseros.h"

Meseros::Meseros(string lista_platillos){
    this->lista_platillos=lista_platillos;
}
Meseros::Meseros(){

}void Meseros::setLista_platillos(string lista_platillos){
   this-> lista_platillos=lista_platillos;
}
string Meseros::getLista_platillos(){
   return lista_platillos;
}
