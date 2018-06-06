#include <iostream>
#include <string>

using namespace std;

int main(){
	int Numero,i;
	cout<<"\n\t Ingrese numero para ver su correspondiente tabla de multiplicar: ";
	cin>>Numero;
	for(i=0;i<=20;i++)
		cout<<"\n\t"<<Numero<<"X"<<i<<": \t"<<Numero*i;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}



