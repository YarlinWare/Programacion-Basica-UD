#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>     
    
using namespace std;

int incremento(int n);

int main(){	
	int num;
	cout<<"Ingrese numero: ";
	cin>>num;
	num = incremento(num);
	cout<<num<<endl;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}

int incremento(int n){
	return ++n;
}




