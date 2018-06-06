#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

void lectura(){
	ifstream archivo;  // objeto de la clase ofstream
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

int main(){	
	lectura();
    return 0;
} 
