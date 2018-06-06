#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int radio;
	double PI=3.1416;
	
	cout<<"\nIngrese el valor del radio: ";
	cin>>radio;
	cout<<"\nEl volumen de la esfera es de: "<< ((4*PI*(pow(radio,3)))/3)<<endl;
	
	system("pause");
	return 0;
}



