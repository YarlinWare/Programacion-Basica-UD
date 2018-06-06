#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	int i=1, num;
	long long int factor=1;
	
	cout<<"Ingrese numero para encontrar su factorial: ";
	cin>>num;

	if (num<0){
		cout<<"El numero "<<num<<" no posee factoiral. ";
	}
	if(num==0){
		factor=factor*i;
		cout<<"El factorial de "<< num<<" Es: "<< factor;
	}
	if(num>0){
		
		for(i;i<=num;i++){
			factor=factor*i;
		}	
		cout<<"El factorial de "<< num<<" Es: "<< factor;			
	}

	cout<<"\a\n";
	system("pause");
	return 0;
}


