
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n,serie,a=1,b=0;
	cout<<"Digite el numero de elementos: ";
	cin>>n;

	for(int i=1; i<=n; i++){
		serie=a+b;
		cout<<serie<<" ";
		a=b;
		b=serie;
	}

	cout<<"\n";
	system("pause");

	return 0;
}
