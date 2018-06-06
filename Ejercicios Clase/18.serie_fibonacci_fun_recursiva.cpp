#include <iostream>

using namespace std;

int fibonacci(int n){
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

main(){
	int x;
	cout<<"Digite un numero: ";
	cin>>x;
	if(x>0)
		cout<<"El "<<x<<"° numero de la serie fibonacci es "<<fibonacci(x)<<"\n"<<endl;
	else
		cout<<"Valor incorrecto"<<"\n"<<endl;
	system ("pause");
}
