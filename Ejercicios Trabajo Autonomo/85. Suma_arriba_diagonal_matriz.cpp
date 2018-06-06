#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>     
    
using namespace std;

int main(){
	int Matriz[4][4], suma;
	srand(time(NULL));
	cout<<"\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			Matriz[i][j]=1+rand()%10;					
		}				
	}
	
	cout<<"\n\t***_______ Matriz _______*** \n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"\t"<<Matriz[i][j];					
		}
		cout<<"\n";			
	}
	
	suma= (Matriz[0][0]+Matriz[0][1]+Matriz[0][2])+(Matriz[1][0]+Matriz[1][1])+(Matriz[2][0]);
	
	cout<<"\n\tLa suma por encima de la diagonal principal es: "<<suma;
	
	
	
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}




