#include <iostream>
#include <string>

using namespace std;

int main(){
	char r;
	int x=1,tope=1000,paso=10;
	do{
		cout<<"\n\t"<<x<<"\t";
		if(x%paso==0 && x!=tope){
			cout<<"\n\tDesea continuar (S/n)?: ";
			cin>>r;	
		}	
	}while(r!='n' && x++<tope);		
	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






