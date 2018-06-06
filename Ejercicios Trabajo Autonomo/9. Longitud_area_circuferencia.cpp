#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int radio;
	double PI=3.1416;
	
	cout<<"\nIngrese el valor del radio: ";
	cin>>radio;
	cout<<"\nEl area de la circuferencia es de: "<< PI*(pow(radio,2))<<endl;
	cout<<"\nLa longitud de la circuferencia es de: "<< 2*PI*radio <<" \n"<<endl;
	
	system("pause");
	return 0;
}



