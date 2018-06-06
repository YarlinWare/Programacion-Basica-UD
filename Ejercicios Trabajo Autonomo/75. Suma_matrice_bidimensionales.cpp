#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     

using namespace std;

int main(){
	int filas,columnas;
	cout<<"\n\tIngrese el tamanio de las dos matrices: \n"<<endl;
	cout<<"\n\tFilas: ";
	cin>>filas;
	cout<<"\n\tColumnas: ";
	cin>>columnas;
	int A[filas][columnas],B[filas][columnas],C[filas][columnas];
	system("cls");
	cout<<"\n\tFilas="<<filas<<"\t\tColumnas="<<columnas<<" \n"<<endl;
	cout<<"\n\tLlene la matriz A: \n"<<endl;	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"\tA["<<i<<"]"<<"["<<j<<"]: ";
			cin>>A[i][j];					
		}
		cout<<"\n";				
	}
	cout<<"\n\tLlene la matriz B: \n"<<endl;	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"\tB["<<i<<"]"<<"["<<j<<"]: ";
			cin>>B[i][j];					
		}
		cout<<"\n";				
	}
	
	system("cls");
	cout<<"\n\tMatriz inicial A: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"\t "<<A[i][j];					
		}
		cout<<"\n";				
	}
	cout<<"\n\tMatriz inicial B: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"\t "<<B[i][j];					
		}
		cout<<"\n";				
	}	
	cout<<"\n\tSuma Matrices Bidimensionales: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			C[i][j]=A[i][j]+B[i][j];
			cout<<"\t "<<C[i][j];					
		}
		cout<<"\n";				
	}
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





