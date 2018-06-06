#include <iostream>
#include <stdio.h> 
#include <cstdio>  
#include <conio.h> 
#include <string.h>      
    
using namespace std;

int main(){
	char cad[30];
	
	for(int i=0;i<30;i++){
		cad[i]='\0';
	}
	cout<<"\n\tIngrese la cadena: ";
	cin.getline(cad,30);
	
	int longitud = strlen(cad);
		
	cout<<"\n\t";
	for (int i=longitud; i>=0; i--){
        cout<<cad[i];
    }
	cout<<"\n";
	
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}




