#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>  

using namespace std;

int main(){
	int arreglo[3][10];
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		arreglo[0][i]=1+rand()%20;					
	}
	
	for(int i=0;i<10;i++){
		arreglo[1][i]=(arreglo[0][i]*arreglo[0][i]);					
	}
	for(int i=0;i<10;i++){
		arreglo[2][i]=(arreglo[0][i]+arreglo[1][i]);				
	}	
	cout<<"\n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			cout<<" \t "<<arreglo[i][j];					
		}
		cout<<" \n ";				
	}
	
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






