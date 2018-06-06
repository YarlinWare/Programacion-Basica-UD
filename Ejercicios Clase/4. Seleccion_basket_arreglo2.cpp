#include<iostream>
#include<stdlib.h>
#include <cstring>
#include <sstream>  


using namespace std;

string convertiratexto(float f);

int main(){
	
	int i, codigo=0,edad=0, cant_aprobados=0, cant_presentados=0,reprobados=0;
	//string seleccion[cant_aprobados];
	double peso, estatura, promedio;
	std::string nombre,programa, aprobados,seleccion[cant_aprobados];
	
	while(i==0){
		system ("cls");
		cout<< "Codigo: ";
		cin>> codigo;
		cout<< "Nombre: ";
		cin>> nombre;
		cout<< "Programa: ";
		cin>> programa;
		cout<< "Edad: ";
		cin>> edad;
		cout<< "Peso: ";
		cin>> peso;
		cout<< "Estatura: ";
		cin>> estatura;
		cout<< "Promedio: ";
		cin>> promedio;
		system ("cls");
		if((edad<=18 && peso<=60) && (estatura >= 1.80 && promedio>= 4.5 )){
			aprobados = "\nCodigo: "+convertiratexto(codigo)+"\tNombre: "+nombre+"\tPrograma: "+programa+"\t Edad: "+convertiratexto(edad)+"\tPeso: "+convertiratexto(peso)+"\tEstatura: "+convertiratexto(estatura)+"\tPromedio: "+convertiratexto(promedio)+"\n";		
			cant_aprobados=cant_aprobados+1;
			seleccion[cant_aprobados-1] = aprobados;
		}
		else{
			reprobados=reprobados+1;
		}	
		cant_presentados=cant_presentados+1;		
		cout<< "¿Desea inscribir otra persona (0.Si o 1.no)?: ";
		cin>> i;
	}
	
	system ("cls");
	cout<< "\nCantidad aprobados: "<< cant_aprobados<<endl;
	cout<< "\nCantidad reprobados: "<<reprobados<<endl;
	cout<< "\nTotal candidatos: "<< cant_presentados<<endl;
	cout<< "\n\t\t***__________________***Lista Aporbados***__________________***\n"<<endl;
	for(i=0;i<cant_aprobados;i++)
		cout<<seleccion[i]<<endl;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}
