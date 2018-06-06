#include<iostream>

using namespace std;

int main(){
	int numero;
	cout<<"Ingrese el valor de la matriz: ";
	cin>>numero;
	cout<<"\n";
	int matriz_a[numero][numero];
	cout<<"El tamaño de la matriz es A["<<numero<<"]["<<numero<<"]\n"<<endl;
	cout<<"El contenido de la matriz es: \n"<<endl;
	for(int i=0;i<numero;i++){
		for(int j=0;j<numero;j++)
			cout<<"  "<<i+j<<"  ";
		cout<<"\n";
	}
	cout<<"\a\n";
	system("PAUSE");
}
