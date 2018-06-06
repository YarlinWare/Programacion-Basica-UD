#include <iostream>
#include <string>

using namespace std;

int main(){
	int arreglo[10],i;
	for(i=4;i<=14;i++){
		arreglo[i-4]=i;
	}
	cout<<"\n\tArreglo[ ";
	for(i=4;i<=14;i++){
		cout<<arreglo[i-4]<<" ";
	}		
	cout<<"]\n\n"<<endl;		
	system("pause");
	return 0;
}






