#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a;
	
	cout<<"\n\tIngrese valor: ";
	cin>>a;	
	if(a<100)
		cout<<"\n\tEl numero "<<a<<" es menor que 100\n"<<endl;
	if(a>100)
		cout<<"\n\tEl numero "<<a<<" es mayor que 100\n"<<endl;	
	if(a==100)
		cout<<"\n\tEl numero ingresado \""<<a<<"\" es igual que 100\n"<<endl;	
	system("pause");
	return 0;
}



