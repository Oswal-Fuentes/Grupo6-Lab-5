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

//
int menu();
//
int menuContratar();
//
int menuChef();
//
int menuMeseros();
//
int menuAgregar();
//
vector<Usuario> agregarCliente(vector<Usuario>usuarios);
//
vector<Usuario> agregarChef(vector<Usuario>usuarios);
//
int menuAdministrador();
//
//Usuario* adminDefecto();
//---

int main(){
	vector<Usuario> usuarios;
	Administrador admin(0,0,2007,25000,"Juan","asd","Juan",33,"qwe","2345");
	usuarios.push_back(admin);
	bool salir=false;
	while (!salir) {
		switch (menu()) {
			case 1:{
				usuarios=agregarCliente(usuarios);
				break;
			}
			case 2:{
				usuarios=agregarChef(usuarios);
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				for (int i=0; i<usuarios.size();i++){
					cout <<i<<") "<< "Username: "<<usuarios[i].getNombre()<<" Password:"<<usuarios[i].getPassword()<<endl;
				}
				break;
			}
			case 6:{
				string username, password;
				cout<<"Ingrese username: "<<endl;
				cin>>username;
				cout<<"Ingrese password: "<<endl;
				cin>>password;
				for (int i = 0; i < usuarios.size(); ++i)
				{
					if(usuarios[i].getUsername().compare(username)==0 && usuarios[i].getPassword().compare(password)==0){
						//string type=typeid(Administrador).getName();
						cout<<"1"<<endl;
						if(typeid(Administrador)==typeid(usuarios[i])){
							cout<<"2"<<endl;
							switch(menuAdministrador()){
								case 1:{
									switch(menuContratar()){
										case 1:{
											usuarios=agregarChef(usuarios);
											break;
										}
									}//Fin switch
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
						
					}//FIN IF
				}//FIN FOR
				break;
			}//FIN CASE 2
			case 7:{
				salir=true;
				break;
			}
			return 0;
		}//Fin swtich
	}//Fin While
	return 0;
}

int menu() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU-----" << endl
		<< "1.- Agregar Clientes" << endl
		<< "2.- Agregar Chef" << endl
		<< "3.- Agregar Lavaplatos" << endl
		<< "4.- Agregar Meseros" << endl
		<< "5.- Listar" << endl
		<< "6.- Log In" << endl
		<< "7.- Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 7)
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

int menuContratar() {
	int opcion;
	bool valido = false;
	do {
		cout << "-----MENU CONTRATAR-----" << endl
		<< "1.- Chef" << endl
		<< "2.- Lavaplatos" << endl
		<< "3.- Meseros" << endl;
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

vector<Usuario> agregarCliente(vector<Usuario>usuarios){
	//---
	string direccion;
	int rating;
	string username;
	string password;
	string nombre;
	int edad;
	string id;
	string telefono;
	//---------	
	ofstream escritura;
	escritura.open("usuarios.txt",ios::out|ios::app);
	if(escritura.is_open()){
			//Solicitando datos
		cout<<"Ingrese direccion: "<<endl;
		cin>>direccion;
		cout<<"Ingrese rating: "<<endl;
		cin>>rating;
		cout<<"Ingrese username: "<<endl;
		cin>>username;
		cout<<"Ingrese password: "<<endl;
		cin>>password;
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese edad: "<<endl;
		cin>>edad;
		cout<<"Ingrese id: "<<endl;
		cin>>id;
		cout<<"Ingrese telefono: "<<endl;
		cin>>telefono;
		Cliente cliente(direccion,rating,username,password,nombre,edad,id,telefono);
		usuarios.push_back(cliente);
			//Escribir datos en el archivo
		escritura<<direccion<<" "<<rating<<" "<<username<<" "<<password<<" "<<nombre<<" "
		<<edad<<" "<<id<<" "<<telefono<<endl;
	}else{
		cout<<"El archivo no se pudo abrir";
	}
	escritura.close();
	return usuarios;
}

vector<Usuario> agregarChef(vector<Usuario>usuarios){
	//---
	string platillo_favorito;
	int rating_chef;
	int ano_contratacion;
	int sueldo;	
	string username;
	string password;
	string nombre;
	int edad;
	string id;
	string telefono;
	//---------	
	ofstream escritura;
	escritura.open("usuarios.txt",ios::out|ios::app);
	if(escritura.is_open()){
			//Solicitando datos
		cout<<"Ingrese platillo favorito: "<<endl;
		cin>>platillo_favorito;
		cout<<"Ingrese rating: "<<endl;
		cin>>rating_chef;
		cout<<"Ingrese año de contratacion: "<<endl;
		cin>>ano_contratacion;
		cout<<"Ingrese sueldo: "<<endl;
		cin>>sueldo;
		cout<<"Ingrese username: "<<endl;
		cin>>username;
		cout<<"Ingrese password: "<<endl;
		cin>>password;
		cout<<"Ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese edad: "<<endl;
		cin>>edad;
		cout<<"Ingrese id: "<<endl;
		cin>>id;
		cout<<"Ingrese telefono: "<<endl;
		cin>>telefono;
		Chef chef(platillo_favorito,rating_chef,ano_contratacion,
			sueldo,username,password,nombre,edad,id,telefono);
		usuarios.push_back(chef);
			//Escribir datos en el archivo
		escritura<<platillo_favorito<<" "<<rating_chef<<" "<<ano_contratacion<<" "<<sueldo<<" "
		<<username<<" "<<password<<" "<<nombre<<" "<<edad<<" "<<id<<" "<<telefono<<endl;
	}else{
		cout<<"El archivo no se pudo abrir";
	}
	escritura.close();
	return usuarios;
}

/*Usuario* adminDefecto(){
	//---
	int cant_empleados_cotratados=0;
	int cant_empleados_despedidos=0;
	int ano_contratacion;
	int sueldo;
	string username;
	string password;
	string nombre;
	int edad;
	string id;
	string telefono;
	//---------	
	ofstream escritura;
	escritura.open("usuarios.txt",ios::out|ios::app);
	//if(escritura.is_open()){
			//Solicitando datos
	cout<<"Ingrese año de contratacion: "<<endl;
	cin>>ano_contratacion;
	cout<<"Ingrese sueldo: "<<endl;
	cin>>sueldo;
	cout<<"Ingrese username: "<<endl;
	cin>>username;
	cout<<"Ingrese password: "<<endl;
	cin>>password;
	cout<<"Ingrese nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingrese edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese id: "<<endl;
	cin>>id;
	cout<<"Ingrese telefono: "<<endl;
	cin>>telefono;
	Usuario* admin = new Administrador(cant_empleados_cotratados,cant_empleados_despedidos,ano_contratacion,sueldo,username,password,nombre,edad,id,telefono);
			//Escribir datos en el archivo
	escritura<<cant_empleados_cotratados<<" "<<cant_empleados_despedidos<<" "<<ano_contratacion<<" "<<sueldo<<" "
	<<username<<" "<<password<<" "<<nombre<<" "<<edad<<" "<<id<<" "<<telefono<<endl;
		//cout<<"El archivo no se pudo abrir";
	
	escritura.close();
	return admin;
}
*/