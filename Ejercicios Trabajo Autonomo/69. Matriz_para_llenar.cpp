#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     

using namespace std;

int main(){
	int arreglo[5][3]={{5,6,13},{14,2,4,},{21,7,6},{12,9,5}};

	for(int i=0;i<3;i++){
		arreglo[4][i]=arreglo[0][i]+arreglo[1][i]+arreglo[2][i]+arreglo[3][i];					
	}	
	
	cout<<"\n\tLa Matriz es: \n"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<" \t "<<arreglo[i][j];					
		}
		cout<<" \n ";				
	}
	
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





