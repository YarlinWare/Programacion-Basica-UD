#include <iostream>
#include <stdio.h> 
#include <cstdio>  
#include <conio.h> 
#include <string.h>      
    

using namespace std;

int main(){
	char cad[30],caracter;
	int cont=0,entero[30],numero;
	
	for(int i=0;i<30;i++){
		//Básicamente '\0' es el carácter que indica el final de la cadena. 
		cad[i]='\0';
	}
	
	cout<<"\n\tIngrese la cadena: ";	
	cin.getline(cad,30);
	
	system("cls");
	
	cout<<"\n\tLa cadena original \""<<cad<<"\": \n"<<endl;
	
	//Longitud de la cadena ingresada	
	int longitud = strlen(cad);	
	
	//De la cadena original
	for(int i=0;i<longitud;i++){
		/*en caracter le asignamos el valor de arreglo en la posicion 'i'	//cout<<"\n"<<caracter;*/		
		caracter=cad[i]; 		
		/*en el arreglo de entero l asignamos el valor del caracter ASSCI, la posicion 'i'	//cout<<"\n"<<entero[i];*/
		entero[i]=caracter;
	}
	
	//Sumamos 2 en cada valor numerico del codigo ASSCI		
	for(int i=0;i<longitud;i++){
		//El valor del arreglo en la posicion 'i' es quivalente al valor actual +2  //cout<<"\n"<<entero[i];
		entero[i]=entero[i]+2;
		//Le asignamos a la variable 'caracter' el equivalente al valor del arreglo 'entero' en la posicion 'i'
		caracter=entero[i];
		//Asignamos en el arrego original de la cadena, el valor actual de 'caracter'	//cout<<"\n"<<caracter;
		cad[i]=caracter;		
	}
	
	//Imprimimos la nueva cadena
	cout<<"\n\tLa cadena encriptada\""<<cad<<"\": \n"<<endl;	
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





