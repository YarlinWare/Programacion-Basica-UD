#include <iostream>
#include <string>

using namespace std;

int main(){
	int numero, suma;
	cout<<"\n\t Ingrese numero: ";
	cin>>numero;
	for(int i=0;i<=numero;i++){
		suma=suma+i;
	}
	cout<<"\n\tLa sumatoria de los numeros del 1 al "<<numero<<" es: "<<suma<<endl;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}



