#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"\n\tIngrese primer valor: ";
	cin>>a;
	cout<<"\n\tIngrese segundo valor: ";
	cin>>b;
	cout<<"\n\tIngrese tercer valor: ";
	cin>>c;
	if(a<=b && b<=c)
		cout<<"\n\tUsted ha introducido los numeros en orden creciente: "<<a<<" < "<<b<<" < "<<c<<"\n"<<endl;
	else
		cout<<"\n\tUsted No ha introducido los numeros en orden creciente \n"<<endl;		
	system("pause");
	return 0;
}



