#include <iostream>

using namespace std;

//funcion recursiva
long long factorial(int n){
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}
main(){
	int x;
	cout<<"Digite un numero: ";
	cin>>x;
	if(x>=0)
		cout<<"El factorial de "<<x<<" es "<<factorial(x)<<"\n"<<endl;
	else
		cout<<"Valor incorrecto"<<"\n"<<endl;
	
	system ("pause");
}
