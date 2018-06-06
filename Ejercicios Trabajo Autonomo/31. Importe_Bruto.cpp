#include <iostream>
#include <string>

using namespace std;

int main(){
	float valor;	
	cout<<"\n\tIngrese el valor bruto de la factura: ";
	cin>>valor;	
	
	if(valor<20000.00)
		cout<<"\n\tEl importe neto es: "<<valor<<"\n"<<endl;
	else
		cout<<"\n\tEl importe neto es: "<<(valor-(valor*0.15))<<".\n"<<endl;	
	system("pause");
	return 0;
}



