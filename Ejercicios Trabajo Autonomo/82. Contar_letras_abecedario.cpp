#include <iostream>
#include <stdio.h> 
#include <cstdio>  
#include <conio.h> 
#include <string.h>     
    
using namespace std;

int main(){
	char cad[30],caracter;
	int cont=0,entero[30],numero,ASSCI[54];
	
	for(int i=0;i<30;i++){
		cad[i]='\0';
	}
	/*--------------------------------Ingresar cadena-----------------------------------*/
	cout<<"\n\tIngrese la cadena: ";
	cin.getline(cad,30);
	int longitud = strlen(cad);
	
	/*--------------------------------Visualizar numero ASSCI----------------------------*/
	//De la cadena original
	for(int i=0;i<longitud;i++){
		/*en caracter le asignamos el valor de arreglo en la posicion 'i'*/			
		caracter=cad[i]; 		
		/*en el arreglo de entero l asignamos el valor del caracter ASSCI, la posicion 'i'*/	
		entero[i]=caracter;
	}
	/*--------------------------------Llenamos matriz ASSCI------------------------------*/
	int j=65;
	int k=97;
	
	//Llenamos arreglo ASSCI
	for(int i=0;i<=25;i++){
		/*en el arreglo de ASSCI le asignamos el valor de cada letra del abecedario 'i'	*/
		ASSCI[i]=j;		
		ASSCI[i+26]=k;
		k++;
		j++;
	}
	
	/*--------------------------------visualizar arreglos--------------------------------*/
	/*Ver el arreglo ASSCI
	for(int i=0;i<52;i++){
		caracter=ASSCI[i];		
		cout<<"\n\t"<<ASSCI[i]<<endl;
	}*/
	/*-----------------------------------------------------------------------------------*/
	
	/*--------------------------------Comparamos ambas cadenas---------------------------*/
	
	for(int i=0;i<longitud;i++){
		cont=0;
		for(j=0;j<=52;j++){
			if (ASSCI[j]==cad[i]){
				caracter=cad[i];
				cont++;
			}						
		}
		cout<<"\n\t\""<<cad[i]<<"\": "<<cont;
		cout<<"\n\t";
	}
	
	
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





