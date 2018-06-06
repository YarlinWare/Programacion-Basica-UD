#include <iostream>
#include <string>
#include<stdlib.h>


using namespace std;

int main(){
	int arreglo[7],pos=0,neg=0;
	
	
	
	for(int i=0;i<7;i++){
		cout<<"\n\tIngrese "<<i+1<<" numero: \t";
		cin>>arreglo[i];
		if(arreglo[i]<=0){
			neg=neg+arreglo[i];
		}
		if(arreglo[i]>0){
			pos=pos+arreglo[i];
		}		
	}
	
	cout<<"\n\tLa suma de los numeros positivos es: "<<pos<<endl;
	cout<<"\n\tLa suma de los numeros negativos es: "<<neg<<endl;

	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






