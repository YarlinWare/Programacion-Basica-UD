#include<iostream>
#include<stdlib.h>
#include <sstream>  

using namespace std;

string convertiratexto(float f);

int main(){
	
	int i, codigo,edad, cant_aprobados, cant_presentados;
	int reprobados=0;
	double peso, estatura, promedio;
	std::string nombre,programa, aprobados;
	
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
		cout<< "Peso (Kg): ";
		cin>> peso;
		cout<< "Estatura (m): ";
		cin>> estatura;
		cout<< "Promedio: ";
		cin>> promedio;
		system ("cls");
		if((edad<=18 && peso<=60) && (estatura >= 1.80 && promedio>= 4.5 )){
			cant_aprobados=cant_aprobados+1;
			aprobados = aprobados+"\nCodigo: "+convertiratexto(codigo)+"\tNombre: "+nombre+"\tPrograma: "+programa+"\tEdad: "+convertiratexto(edad)+"\tPeso: "+convertiratexto(peso)+"\tEstatura: "+convertiratexto(estatura)+"\tPromedio: "+convertiratexto(promedio)+"\n_________________________________________________________________________________________\n";		
		}
		else{
			int reprobados=reprobados+1;
		}	
		cant_presentados=cant_presentados+1;		
		cout<< "¿Desea inscribir otra persona (0.Si o 1.no)?: ";
		cin>> i;
	}
	cout<< "Cantidad aprobados: "<< cant_aprobados<<endl;
	cout<< "Cantidad reprobados: "<< reprobados<<endl;
	cout<< "Total candidatos: "<< cant_presentados<<endl;
	cout<< "\t\t***__________________***Lista Aporvados***__________________***\n"<<endl;
	cout<< aprobados<<endl;
	
	cout<<"\n";
	system("pause");
	return 0;
}

string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}
