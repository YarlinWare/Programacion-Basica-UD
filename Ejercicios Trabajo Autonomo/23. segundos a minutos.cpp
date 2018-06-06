#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int segundos,minutos;
	cout<<"\n\t***______Segundos a minutos______***\n\n";
	cout<<"\n\tIngrese segundos: ";
	cin>>segundos;
	minutos = segundos/60;
	segundos = segundos%60;
	cout<<"\n\tEl area del rectangulo es de "<< minutos<<" min y "<<segundos<<" segundos\n"<<endl;		
	system("pause");
	return 0;
}



