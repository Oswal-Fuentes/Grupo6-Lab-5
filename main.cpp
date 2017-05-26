#include <iostream>
#include <typeinfo>
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
//Funcion menu administrador
int menuAdministrador();
//
int menuChef();
//
int menuMeseros();

int main(){
	vector<Usuario>usuarios;
	bool salir=false;
	while (!salir) {
		switch (menu()) {
			case 1:{

				break;
			}
			case 2:{
				string username, password;
				cout<<"Ingrese username: "<<endl;
				cin>>username;
				cout<<"Ingrese password: "<<endl;
				cin>>password;
				for (int i = 0; i < usuarios.size(); ++i)
				{
					if(usuarios[i].getUsername()==username && usuarios[i].getPassword()==password){
						//string type=typeid(Administrador).getName();
						if(typeid(Administrador)==typeid(usuarios[i])){
							switch(menuAdministrador()){
								case 1:{

									break;
								}
								case 2:{
									
									break;
								}
								case 3:{
									
									break;
								}
								case 4:{
									
									break;
								}
								case 5:{
									
									break;
								}
								case 6:{
									
									break;
								}
							}
						}
						if(typeid(Chef)==typeid((usuarios[i]))){
							switch(menuChef()){
								case 1:{

									break;
								}
								case 2:{
									
									break;
								}
							}	
							if(typeid(Lavaplatos)==typeid((usuarios[i]))){

							}
							if(typeid(Meseros)==typeid((usuarios[i]))){

							}			
						}
						break;
					}//FIN IF
				}//FIN FOR
			}//FIN CASE 2
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

int menuAdministrador() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU ADMINISTRADOR-----" << endl
		<< "1.- Contratar empleado (agregar)" << endl
		<< "2.- Despedir (eliminar)" << endl
		<< "3.- Aumentar/Decrementar" << endl
		<< "4.- Conseguir al empleado con menor sueldo" << endl
		<< "5.- Conseguir al empleado con mayor sueldo" << endl
		<< "6.- Conseguir el promedio de sueldo de todos los empleados" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 6)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuChef() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU CHEF-----" << endl
		<< "1.- Gritar a Lavaplatos " << endl
		<< "2.- Agradar Lavaplatos" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 2)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}



int menuMeseros() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU MESEROS-----" << endl
		<< "1.- Listar Platillos" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 1)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}