#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

void escribir(){
	ofstream archivo;  // objeto de la clase ofstream para escritura
	string nombre_archivo,frase;

	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombre_archivo);
	
	// archivo.open(d://prueba//ejemplo.txt,ios::out)
	//archivo.open("datos.txt",ios::out); //abriendo el archivo	
	archivo.open(nombre_archivo.c_str(),ios::out); //abriendo el archivo
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	cout<<"Digite el texto del archivo: ";
	getline(cin,frase);
		
	archivo << frase << endl;
	archivo.close();
};

void lectura(){
	ifstream archivo;  // objeto de la clase ifstream para lectura
	string texto;
	

	// archivo.open(d://prueba//ejemplo.txt,ios::out)
	//archivo.open("datos.txt",ios::out); //abriendo el archivo	
	archivo.open("hola.txt",ios::out); //abriendo el archivo
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	//mientras nmo sea el final de archivo
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //cerramos el archivo
};

int main()
{
	
	//escribir(); 
    lectura();
    return 0;
} 
