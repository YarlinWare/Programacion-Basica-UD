#include <iostream>
#include <string>

using namespace std;

int main(){
	string caracter;	
	cout<<"\n\tIngrese un caracter: ";
	cin>>caracter;	
	if((caracter=="a" ||caracter=="A")||(caracter=="e" ||caracter=="E")||(caracter=="i" ||caracter=="I")||(caracter=="o" ||caracter=="O")||(caracter=="u" ||caracter=="U"))
		cout<<"\n\tEl Caracettr ingresado es una vocal\n"<<endl;
	else
		cout<<"\n\tEl Caracettr ingresado es una consonante\n"<<endl;	
	system("pause");
	return 0;
}



