#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a, b, c;
	double x1, x2, r, q;
	cout<<"Digite 3 valores para {A,B,C}, de la ecuacion cuadratica (A(X^2)+BX+C=0): \n";
	cout<<"A: ";cin>>a;
	cout<<"B: ";cin>>b;
	cout<<"C: ";cin>>c;
	r=(b*b)-(a*c*4);
	if(a==0){
		cout<<"No es posible dividir entre 0\n"<<endl;
	}
	else{
		if(r<0){
		r=(r*-1);
		q=((b*-1)/(2*a));
		cout<<"x1= ("<< q<<" + "<<(sqrt(r))/(2*a)<<" i"<<")"<<"\n"<<endl;
		cout<<"x2= ("<< q<<" - "<<(sqrt(r))/(2*a)<<" i"<<")"<<"\n"<<endl;		
		}
		else{
			x1=((b*-1)+sqrt((b*b)-(4*a*c)))/(2*a);
			cout<<"x1 = "<<x1<<endl;
			x2=((b*-1)-sqrt((b*b)-(4*a*c)))/(2*a);
			cout<<"x2 = "<<x2<<endl;
		}
	}
	if(a==1)
		cout<<"F(x)= X^2 + "<<b<<"X"<<" + "<<c<<"= 0\n";
	else
		cout<<"F(x)= "<<a<<"X^2 + "<<b<<"X"<<" + "<<c<<"= 0\n";
	cout<<"\n";
	system("pause");

	return 0;
	
}
