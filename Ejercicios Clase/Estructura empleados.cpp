#include<iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct fecha{
	int anio;
	int mes;
	int dia;	
};

struct persona{
		int codigo[10];
		string nombre[10];
		struct fecha ingreso[10];
		float sueldo[10];	
};
struct persona empleados;

void registrando(int n){
	
	//struct persona empleados;	
	cout<<"\n\tDatos a ingresar: \n\n";	
	cout<<"\n\tCodigo: ";	
	cin>> empleados.codigo[n];
	cout<<"\n\tNombre: ";	
	cin>> empleados.nombre[n];
	cout<<"\n\tFecha ingreso: \n";	
	cout<<"\n\t\tAnio: ";	
	cin>>empleados.ingreso[n].anio;
	cout<<"\n\t\tMes: ";	
	cin>>empleados.ingreso[n].mes;
	cout<<"\n\t\tDia: ";	
	cin>>empleados.ingreso[n].dia;
	cout<<"\n\tSueldo: ";	
	cin>> empleados.sueldo[n];
}

int main(){
	system("color F1");
	int i,n=0;
	string ingresar_nuevo_empleado;
	string lista_empleados[100];
	
	cout<<"\n\t****----------------- Datos Empleado -----------------****\n";
	do{ 
		registrando(n);
		cout<<"\n\t>>Desea ingresar un nuevo empleado (S/N)?: ";	
		cin>>ingresar_nuevo_empleado;
		n++;		
	}while((ingresar_nuevo_empleado!="N"));
	system("cls");
	cout<<"\n\t****-------------- Empleado Registrados ---------------****\n";	
	for(i=0;i<n;i++) {
		cout<<"\n\t****-------------- Empleado "<<empleados.nombre[i]<<" ---------------****\n";	
		cout<<"\n\tCodigo: "<<empleados.codigo[i];
		cout<<"\n\tFecha de ingreso: "<<empleados.ingreso[i].dia<<"/"<<empleados.ingreso[i].mes<<"/"<<empleados.ingreso[i].anio<<endl;
		cout<<"\n\tSueldo: "<<empleados.sueldo[i];		
		cout<<"\n\n"<<endl;		
	}
	cout<<"\n\n"<<endl;	
		
	system("pause");
	return 0;
}

