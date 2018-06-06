#include <iostream>
#include <stdio.h> 
#include <cstdio>       
    

using namespace std;

int main(){
	char cad[30];
	int cont=0;
	for(int i=0;i<30;i++){
		cad[i]='\0';
	}
	cout<<"\n\tIngrese la cadena: ";
	cin.getline(cad,30);
	for(int i=0;i<30;i++){
		if(isupper(cad[i]))
			cont++;
	}
	cout<<"\n\tLa cadena \""<<cad<<"\" tiene "<<cont<<" mayuscula"<<endl;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





