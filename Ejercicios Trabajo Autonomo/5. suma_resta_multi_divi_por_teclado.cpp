#include <iostream>

using namespace std;

int main(){
	int a, b;
	cout<<"\nIngrese el valor del primer numero: ";
	cin>>a;
	cout<<"Ingrese el valor del segundo numero: ";
	cin>>b;
	cout<<"\nLa suma de "<<a<<" + "<<b<<" es: "<< a+b <<" \n"<<endl;
	cout<<"La resta de "<<a<<" - "<<b<<" es: "<< a-b <<" \n"<<endl;
	cout<<"La mutiplicacion de "<<a<<" X "<<b<<" es: "<< a*b <<" \n"<<endl;
	
	if(a==0 || b==0){
		cout<<"La division de "<<a<<" / "<<b<<" no es posible \n"<<endl;
	}		
	else if(a>=b){
		cout<<"La division de "<<a<<" / "<<b<<" es: "<< a/b <<" \n"<<endl;
	}		
	else if(a<b){
		cout<<"La division de "<<b<<" / "<<a<<" es: "<< b/a <<" \n"<<endl;
	}
			
	system("pause");
	return 0;
}



