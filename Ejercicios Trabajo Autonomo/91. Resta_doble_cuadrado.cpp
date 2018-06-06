#include<iostream>
#include<stdlib.h>
#include<math.h>
int cuadrado,doble;

using namespace std;

void resta(int n){
	cuadrado=pow(n,2);
	doble=2*n;
	int resultado= cuadrado-doble;
	cout<<"\n\tEl numero original: "<<n;
	cout<<"\n\tEl numero doble: "<<doble;
	cout<<"\n\tEl numero al cuadrado: "<<cuadrado;
	cout<<"\n\tResta: "<<cuadrado<<" - "<<doble<<" = "<< resultado;
}

int main(){
	int num;		
	cout<<"\n\tIngrese numero: ";
	cin>>num;
	resta(num);
	cout<<"\a\n\n"<<endl;	
	system("pause");
	return 0;
}




