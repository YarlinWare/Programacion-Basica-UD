#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x1,x2,y1,y2,area,alto,ancho;
	cout<<"\n\t***______Area rectangulo por cordenadas______***\n\n";
	cout<<"\n\tIngrese coordenadas (x1,y1): ";
	cout<<"\n\tx1: ";
	cin>>x1;
	cout<<"\ty1: ";
	cin>>y1;
	cout<<"\n\tIngrese coordenadas (x2,y2): ";
	cout<<"\n\tx2: ";
	cin>>x2;
	cout<<"\ty2: ";
	cin>>y2;
	alto =(y1-y2);
	ancho=(x1-x2);
	if(alto < 0)
		alto *=-1;
	if(ancho < 0)
		ancho *=-1;
	cout<<"\n\tEl area del rectangulo es de "<< ancho*alto<<"\n"<<endl;
		
	system("pause");
	return 0;
}



