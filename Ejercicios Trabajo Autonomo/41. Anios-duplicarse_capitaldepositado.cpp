#include <iostream>
#include <string>

using namespace std;

int main(){
	float capital,interes_anual;
	int anios;
	cout<<"\n\t Ingrese capital: ";
	cin>>capital;
	while(interes_anual!=capital){
		interes_anual=interes_anual+(capital*0.05);
		cout<<interes_anual<<"\n";
		anios++;		
	}
	cout<<"\n\tTarda "<<anios<<" años para duplicarse el capital depositado con un interes del 5%";
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}



