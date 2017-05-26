#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Usuario.h"

using namespace std;

int main(){
	vector<Usuario> vUsuario;
	int opcMenu;
	do{
		cout<<"Menú";
		cout<<"1. Agregar"<<endl;
		cout<<"2. Listar"<<endl;
		cout<<"3. Modificar"<<endl;
		cout<<"4. Eliminar"<<endl;
		cout<<"5. Guardar en archivos de texto"<<endl;
		cout<<"6. Leer de archivos de texto"<<endl;
		cout<<"7. Guardar en binarios"<<endl;
		cout<<"7. Leer de binarios"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Ingrese opción: "<<endl;
		cin>>opcMenu;
		switch(opcMenu){
			case 1:
			cout<<"Menú agregar";
			cout<<"1. Usuario";
			int opcAgregar;
			cout<<"Ingrese la opción: ";
			cin>>opcAgregar;
			switch(opcAgregar){
				case 1:
				string username;
				cout<<"Ingrese username: ";
				cin>>username;
				string password;
				cout<<"Ingrese password: ";
				cin>>password;
				string nombre;
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				int edad;
				cout<<"Ingrese edad: ";
				cin>>edad;
				string id;
				cout<<"Ingrese id: ";
				cin>>id;
				string telefono;
				cout<<"Ingrese telefono: ";
				cin>>telefono;
				Usuario temporal(username,password,nombre,edad,id,telefono,);
				vUsuario.push_back(temporal);
				break;
			}
			break;
			case 2:
			cout<<"Menú listar";
			cout<<"1. Usuario";
			int opcListar;
			cout<<"Ingrese la opción: ";
			cin>>opcListar;
			switch(opcListar){
				case 1:
				for(int i=0;i<vUsuario.size();i++){
					cout<<username<<" = "<<vUsuario.getusername();
					cout<<password<<" = "<<vUsuario.getpassword();
					cout<<nombre<<" = "<<vUsuario.getnombre();
					cout<<edad<<" = "<<vUsuario.getedad();
					cout<<id<<" = "<<vUsuario.getid();
					cout<<telefono<<" = "<<vUsuario.gettelefono();

				}break;
			}
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
		}
	}while(opcMenu!=8);
}