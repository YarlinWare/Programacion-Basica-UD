#include <iostream>
#include <string>

using namespace std;

int main(){
	float acum=0;
	int n[5],i=0;
	do{
		cout<<"\n\t Ingrese numero: "<<i+1<<" de 5: ";
		cin>>n[i];	
		acum+=n[i];
		i++;	
	}while(i < 5);	
	cout<<"\n\tLa media de los 5 numeros es: "<<(acum/(i-1))<<endl;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






