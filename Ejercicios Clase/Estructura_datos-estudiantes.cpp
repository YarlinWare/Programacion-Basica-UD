#include<stdlib.h>
#include <sstream>  
#include<iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct registro{
		int codigo;
		std::string nombre;
		int cedula;
		std::string direccion;
		float notas[3][3];	
};

int
 validando_nota( ){
 	struct registro estudiantes;
 	int nota;
	do{
		cout<<"\t";
		cin>>nota;
		if(nota <0 || nota > 5)
			cout<<"\n\tInvalido, intente nuevamente.... \n"<<endl;
	}while(nota <0 || nota > 5);	
	return nota;
}

void registrando(){
	struct registro estudiantes;
	int respuesta;	
	do{
	cout<<"\n\t****----------------- Datos Estudiante -----------------****";
	cout<<"\n\tRegistro: \n\n";	
	cout<<"\n\tCodigo: ";	
	cin>> estudiantes.codigo;
	cout<<"\n\tNombre: ";	
	cin>> estudiantes.nombre;
	cout<<"\n\tCedula: ";	
	cin>> estudiantes.cedula;
	cout<<"\n\tDireccion: ";	
	cin>> estudiantes.direccion;
	cout<<"\n\tNotas: \n";	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"\tSemestre "<<i+1<<" Corte "<<j<<":";	
			estudiantes.notas[i][j]=validando_nota();
		}
		cout<<"\n";
	}
	
	cout<<"\t¿Desea Registrar otro estudiante?: ";
	cin>>respuesta;		
	}while(respuesta !=0);	
	
	
	cout<<"\n\tCodigo: "<<estudiantes.codigo;		
	cout<<"\n\tNombre: "<<estudiantes.nombre;
	cout<<"\n\tCedula: "<<estudiantes.cedula;
	cout<<"\n\tDireccion: "<<estudiantes.direccion;

	for(int i=0;i<3;i++){
		cout<<"\n\tSemestre "<<i+1<<endl;
		for(int j=0;j<3;j++){
			cout<<"\n\t\tCorte "<<j<<" :"<<estudiantes.notas[i][j]<<endl;
		}
		cout<<"\n";
	}
}


int main(){
	struct registro estudiantes;
	registrando();		
	validando_nota();	
	cout<<"Codigo: "<<estudiantes.codigo;		
	cout<<"Nombre: "<<estudiantes.nombre;
	cout<<"Cedula: "<<estudiantes.cedula;
	cout<<"Direccion: "<<estudiantes.direccion;

	for(int i=0;i<3;i++){
		cout<<"\tSemestre "<<i+1<<endl;
		for(int j=0;j<3;j++){
			cout<<"Corte "<<j<<" :"<<estudiantes.notas[i][j]<<endl;
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}
