#include <iostream>
#include <string>

using namespace std;

int main(){
	int arreglo[33],x=1,y;
	do{
		if(x%3==0 && x!=100){
			arreglo[y++]=x;
		}
	}while(x++<100);
	
	cout<<"\n\tArreglo[ ";
	for(y=1;y<=33;y++){
		cout<<arreglo[y]<<" ";
	}		
	cout<<"]\n\n"<<endl;		
	system("pause");
	return 0;
}






