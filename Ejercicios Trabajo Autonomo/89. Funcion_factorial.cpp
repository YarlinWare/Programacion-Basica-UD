#include<iostream>
#include<stdlib.h>
int i=1;
long long int factor=1;
using namespace std;

void factorial(int n){
	
	if (n<0){
		cout<<"\n\tEl numero "<<n<<" no posee factoiral. ";
	}
	if(n==0){
		factor=factor*i;
		cout<<"\n\tEl factorial de "<< n<<" Es: "<< factor;
	}
	if(n>0){
		for(i;i<=n;i++){
			factor=factor*i;
		}
		cout<<"\n\tEl factorial de "<< n <<" Es: "<< factor;			
	}
}

int main(){
	int num;		
	cout<<"\n\tIngrese numero para encontrar su factorial: ";
	cin>>num;
	factorial(num);
	cout<<"\a\n\n"<<endl;	
	system("pause");
	return 0;
}




