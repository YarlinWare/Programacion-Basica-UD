#include <iostream>
#include <string>

using namespace std;

int main(){
	float acum=0;
	int n;
	for(int i=0;i<5;i++){
		cout<<"\n\t Ingrese numero: "<<i+1<<" de 5: ";
		cin>>n;
		acum+=n;
	}
	cout<<"\n\tLa media de los 5 numeros es: "<<(acum/5)<<endl;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}



