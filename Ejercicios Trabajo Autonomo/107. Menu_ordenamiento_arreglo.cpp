#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include<stdio.h> 
#include<conio.h> 

int TAM;
using namespace std;

void llenado_enteros_aleatorios(int tamanio, int arreglo[]){	
	for(int i=0;i<tamanio;i++)
		arreglo[i]=1+rand()%20;	
};

void salida_pantalla_arreglo(int tamanio, int arreglo1[], int arreglo2[]){
	cout<<"\n\n\tArreglos creados:"<<endl;
	cout<<"\n\t\tArreglo Original: ";
	cout<<"\n\t";					
	for(int i=0;i<tamanio;i++)
		cout<<"\t"<<arreglo1[i];
	cout<<"\n\n\t\tArreglo Copiado: ";
	cout<<"\n\t";			
	for(int i=0;i<tamanio;i++)
		cout<<"\t"<<arreglo2[i];
	cout<<"\n\n\t";
};

void copia_arreglo_original(int tamanio, int arreglo[]){
	int arreglo_copia[tamanio];
	for(int i=0;i<tamanio;i++)
		arreglo_copia[i]=arreglo[i];
	salida_pantalla_arreglo(tamanio, arreglo, arreglo_copia);	
};

void ordenamiento_burbuja(int N, int A[]){
	int Auxiliar,i,j;
	cout<<"\n\tOrdenar por burbuja ";
	//Organizando variable de mayor a menor	  
    for(i=0;i<N;i++){
    	for(j=(i+1);j<N;j++){    		
    		if(A[i]>A[j]){
    			A[i]=A[i];				
			}else{
				Auxiliar=A[i];
				A[i]=A[j];
				A[j]=Auxiliar;
			}			
		}
	}
	cout<<"\n\tVector Mayor a Menor\n"; 	
	cout<<"\n\tA";
	for(i=0;i<N;i++){   	
   		cout<<"[ "<<A[i]<<" ]";     
	}cout<<" "<<endl;	
	cout<<"\n"<<endl;
};

void ordenamiento_seleccion(int N, int A[]){
	cout<<"\n\tOrdenar por seleccion ";
	int Auxiliar,i,j,temp=0,minimo=0;	
	//Organizando variable de mayor a menor	
	for(i=0;i<N;i++){ 
		minimo=i;
		for(j=i+1;j<N;j++){
			if(A[minimo] > A[j]){
				minimo=j;
			}				
		}			
		temp=A[minimo]; 
		A[minimo]=A[i]; 
		A[i]=temp; 
	}     
	cout<<"\n\tVector Menor a Mayor\n"; 	
	cout<<"\n\tA";
	for(i=0;i<N;i++){   	
   		cout<<"[ "<<A[i]<<" ]";     
	}cout<<" "<<endl;	
	cout<<"\n"<<endl;
};

void ordenamiento_insercion(int N, int A[]){
	int aux,i,j,temp=0,minimo=0,B;
	cout<<"\n\tOrdenar por inserccion ";
	for(i=1;i<N;i++){ 
		j=i; 
		aux=A[j]; 
		while(j>0 && aux<A[j-1]) { 
			A[j]=A[j-1]; 
			j--; 
		} 
		A[j]=aux; 
	} 
	cout<<"\n\tVector Menor a Mayor\n"; 	
	cout<<"\n\tA";
	for(i=0;i<N;i++){   	
   		cout<<"[ "<<A[i]<<" ]";     
	}cout<<" "<<endl;	
	cout<<"\n"<<endl;
	
	getch(); 
};

void ordenamiento_quick_sort(int N, int arreglo[],int limite_izq, int limite_der){
	
    int izq,der,temporal,pivote,i;

    izq=limite_izq;
    der = limite_der;
    pivote = arreglo[(izq+der)/2];
    do{
        while(arreglo[izq]<pivote && izq<limite_der)izq++;
        while(pivote<arreglo[der] && der > limite_izq)der--;
        if(izq <=der){
            temporal= arreglo[izq];
            arreglo[izq]=arreglo[der];
            arreglo[der]=temporal;
            izq++;
            der--;
        }
    
    if(limite_izq<der)
		ordenamiento_quick_sort(TAM,arreglo,limite_izq,der);
    if(limite_der>izq)
		ordenamiento_quick_sort(TAM,arreglo,izq,limite_der);
	}while(izq<=der);
	cout<<"\n\tA";
	for(i=0;i<N;i++){   	
   		cout<<"[ "<<arreglo[i]<<" ]";     
	}cout<<" "<<endl;	
	cout<<"\n"<<endl;
};

void menu_operaciones(int tamanio, int arreglo[]){
	int opcion;	
	cout<<"\n\tMenu:\n"<<endl;
	cout<<"\n\t1.Ordenar por burbuja ";
	cout<<"\n\t2.Ordenar por seleccion ";
	cout<<"\n\t3.Ordenar por inserccion ";
	cout<<"\n\t4.Ordenar por quick sort ";
	cout<<"\n\t5.salir ";
	cout<<"\n\tOpcion: ";
	cin>>opcion;	
	
	//donde opción es la variable a comparar
	switch(opcion){
    case 1: //Bloque de instrucciones 1;
    	ordenamiento_burbuja(tamanio, arreglo);
    break;
    case 2: //Bloque de instrucciones 2;
    	ordenamiento_seleccion(tamanio, arreglo);
    break;
    case 3: //Bloque de instrucciones 3;
    	ordenamiento_insercion(tamanio, arreglo);
    break;
    case 4: //Bloque de instrucciones 4;
    	cout<<"\n\tOrdenar por quick sort ";
    	ordenamiento_quick_sort(tamanio, arreglo,0,TAM-1);
    break;
    case 5: //Bloque de instrucciones 5;
    	exit(0);
    break;
    default: //Bloque de instrucciones por defecto;
    	cout<<"\n\tNumero ingresado incorrecto..."<<endl;
	}	
};


int main(){	

	srand(time(NULL));
	cout<<"\n\t***________________ Medotos de odenamiento de arreglos________________***\n\n"<<endl;
	
	/*-----------------------llenado y salida por pantalla del arreglo-----------------------*/
	cout<<"\n\tTamanio del arreglo: ";
	cin>>TAM;
	int arreglo[TAM];
	cout<<"\n\tLlenado aleatorio del arrego..."<<endl;
	llenado_enteros_aleatorios(TAM,arreglo);
	cout<<"\n\tCreando copia del arreglo original...\n"<<endl;
	copia_arreglo_original(TAM,arreglo);
	system("pause");
	/*----------------------- Menu de operaciones para ordenamiento -----------------------*/
	menu_operaciones(TAM,arreglo);	
	
	
	system("pause");
    return 0;
} 
