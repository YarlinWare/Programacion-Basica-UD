#include <iostream>
#include <string>
#include<stdlib.h>


using namespace std;

int main(){
	int arreglo[3][3] = {{-2,56,50},{44,-12,-42},{70,57,-86}};
	int neg=0,pos=0;	
		
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){			
			if(arreglo[i][j]>=0)
				pos=pos+arreglo[i][j];			
			else
				neg=neg+arreglo[i][j];				
		}					
	}	
		
	cout<<"\n\tLa suma de los numeros positivos es: "<<pos<<endl;
	cout<<"\n\tLa suma de los numeros negativos es: "<<neg<<endl;

	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






