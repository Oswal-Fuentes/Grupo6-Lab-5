#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include "Meseros.h"

using namespace std;

//Funcion menu
int menu();

int main(){
	bool salir=false;
	while (!salir) {
		switch (menu()) {
			case 1:{
				
				break;
			}
			case 2:{

				break;
			}
			case 3:{
				salir=true;
				break;
			}
			return 0;
		}//Fin swtich
	}//Fin While
	return 0;
}//Fin Main

int menu() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU-----" << endl
		<< "1.- Agregar usuarios" << endl
		<< "2.- Log In" << endl
		<< "3.- Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 3)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}