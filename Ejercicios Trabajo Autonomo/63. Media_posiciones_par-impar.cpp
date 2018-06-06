#include <iostream>
#include <string>
#include<stdlib.h>


using namespace std;

int main(){
	int arreglo[20],posicion_impar=0,posicion_par=0;	
	for(int i=1;i<=20;i++){
		cout<<"\n\tIngrese "<<i<<" numero: \t";
		cin>>arreglo[i];
		if(i%2==1)
			posicion_impar=posicion_impar+arreglo[i];			
		else
			posicion_par=posicion_par+arreglo[i];			
	}		
	cout<<"\n\tLa suma de los numeros posicion par es: "<<posicion_par<<endl;
	cout<<"\n\tLa media es: "<<(posicion_par/10)<<endl;
	cout<<"\n\n\tLa suma de los numeros posicion impar  es: "<<posicion_impar<<endl;
	cout<<"\n\tLa media es: "<<(posicion_impar/10)<<endl;

	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






