#include <iostream>
#include <math.h>
using namespace std;
main(){
	double base,varilla1,varilla2, h, altura1,altura2;
	cout<<"Digite "<<endl;
	cout<<"La base del pozo: \t\t";
	cin>>base;
	cout<<"La longitud de la primera varilla: \t";
	cin>>varilla1;
	cout<<"La longitud de la segunda varilla: \t";
	cin>>varilla2;
	if(varilla1<base || varilla2<base){
		cout<<"Las varillas no se intersectan\n"<<endl;
	}
	else{
		altura1=sqrt((pow(varilla1,2))-(pow(base,2))); //Lado izquierdo del pozo
		altura2=sqrt((pow(varilla2,2))-(pow(base,2))); //Lado derecho del pozo
		h=(altura1*altura2)/(altura1+altura2); //Altura del triangulo
		cout<<"La altura del triangulo, formado por la interceccion, de las 2 varillas es: "<<h<<" m\n"<<endl;
    }
    system("PAUSE");
    return 0;
}

