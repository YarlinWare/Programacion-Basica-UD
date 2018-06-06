#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int celsius,fahrenheit,opcion;
	do{		
		system("CLS");
		cout<<"\n\tIngrese su opcion: ";
		cout<<"\n\t1. Celsius a Fahrenheit ";
		cout<<"\n\t2. Fahrenheit a Celsius ";
		cout<<"\n\tOpcion: ";
		cin>>opcion;			
	}while((opcion!=1) && (opcion!=2));
	
	if(opcion==1){
		cout<<"\n\t***____ Celsius a Fahrenheit ___***\n";
		cout<<"\n\tIngrese grados Celsius: ";
		cin>>celsius;
		cout<<"\n\tLa conversion de grados es de "<< (celsius*1.8)+32<<" grados Fahrenheit\n";		
	}
	
	if(opcion==2){
		cout<<"\n\t***____ Fahrenheit a Celsius ___*** \n";
		cout<<"\n\tIngrese grados Fahrenheit: ";
		cin>>fahrenheit;
		cout<<"\n\tLa conversion de grados es de "<< ((fahrenheit-32)/(1.8))<<" grados Celsius\n\n"<<endl;	
	}
	
	system("pause");
	return 0;
}



