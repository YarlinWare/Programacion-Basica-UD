#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     

using namespace std;

int main(){
	float arreglo[3][4];

	cout<<"\n\tLlene la matriz: \n"<<endl;	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"A["<<i<<"]"<<"["<<j<<"]: ";
			cin>>arreglo[i][j];					
		}
		cout<<"\n";				
	}
	system("cls");
	cout<<"\n\tMatriz inicial: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"\t "<<arreglo[i][j];					
		}
		cout<<"\n";				
	}
	cout<<"\n\tMatriz dividida por A[2][2]="<<arreglo[2][2]<<":\n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			arreglo[i][j]=(arreglo[i][j]/arreglo[2][2]);
			cout<<"\t"<<arreglo[i][j];					
		}
		cout<<"\n";				
	}
		
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





