//MCM y MCD
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int A,B,cociente,resto, MCM;
	cout<<"Ingrese un primer número entero: "; cin>>A;
	cout<<"Ingrese un segundo número entero: "; cin>>B;
	int AA=A;
	int BB=B;
	
	if(A>=B){
	resto=A % B;
		while(resto!=0){
			cociente=A/B;
			resto=A % B;
			A=B;
			B=resto;
			
		}
		cout<<"MCD es: "<<A<<"\n";
		MCM=(AA*BB)/A;
		cout<<"MCM es: "<<MCM<<"\n";	
	}else{
	resto=B % A;
		while(resto!=0){
			cociente=B/A;
			resto=B % A;
			B=A;
			A=resto;
		}
		cout<<"MCD es: "<<B<<"\n";
		MCM=(AA*BB)/BB;
		cout<<"MCM es: "<<MCM<<"\n";	
	}
	cout<<"\n";
	system("pause");

	return 0;
}
