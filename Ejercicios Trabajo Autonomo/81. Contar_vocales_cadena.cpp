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
		if((cad[i]=='a')||(cad[i]=='e')||(cad[i]=='i')||(cad[i]=='o')||(cad[i]=='u'))
			cont++;
		if((cad[i]=='A')||(cad[i]=='E')||(cad[i]=='I')||(cad[i]=='O')||(cad[i]=='U'))
			cont++;
	}
	cout<<"\n\tLa cadena \""<<cad<<"\" tiene "<<cont<<" vocales"<<endl;
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}





