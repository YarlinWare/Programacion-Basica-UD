#include<iostream>

using namespace std;

const int TAM=1;

struct alumno{
	int codigo;
	char nombre[30];	
	char apellido[30];
	char direccion[50];
	int telefono;
	char correo[30];
};

alumno alumnos[TAM];
void leer(alumno *a);
void buscar_alumno(alumno *a);

int main(){	
	for(int i=0; i<TAM; i++){
		leer(&alumnos[i]);
	}
	
	cout<<"\n\n"<<endl;	
	system("pause");
	return 0;
}

void leer(alumno *a){
	cout<<"\n\tIngrese nombres del alumno: ";
	cin.getline((*a).nombre,30);
	cout<<"\n\tIngrese apellidos del alumno: ";
	cin.getline((*a).apellido,30);	
	cout<<"\n\tIngrese direccion de residencia del alumno: ";
	cin.getline((*a).direccion,50);
	cout<<"\n\tIngrese correo del alumno: ";
	cin.getline((*a).correo,30);
	cout<<"\n\tIngrese telefono del alumno: ";
	cin>>((*a).telefono);
	cout<<"\n\tIngrese codigo del alumno: ";
	cin>>((*a).codigo);	
}

void buscar_alumno(alumno *a){
	
}


