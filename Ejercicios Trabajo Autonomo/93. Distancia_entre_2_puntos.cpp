#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

void distancia(int x1,int y1,int x2,int y2){
	float distancia;
	distancia=(pow((x2-x1),2)+pow((y2-y1),2));
	distancia=sqrt(distancia);
	cout<<"\n\tLa distancia es de: "<<distancia<<" unidades";
}

int main(){	
	int xa,ya,xb,yb;
	cout<<"\n\t***______Distancia entre 2 puntos______***\n\n";
	cout<<"\n\tIngrese coordenadas (x1,y1): ";
	cout<<"\n\tx1: ";
	cin>>xa;
	cout<<"\ty1: ";
	cin>>ya;
	cout<<"\n\tIngrese coordenadas (x2,y2): ";
	cout<<"\n\tx2: ";
	cin>>xb;
	cout<<"\ty2: ";
	cin>>yb;
	distancia(xa,ya,xb,yb);
	
	cout<<"\a\n\n"<<endl;	
	system("pause");
	return 0;
}




