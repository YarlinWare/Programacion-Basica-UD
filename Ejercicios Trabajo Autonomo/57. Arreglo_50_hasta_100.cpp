#include <iostream>
#include <string>
#include <ctime>
#include<stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int o[10],x=1,y;
	float c[10];
	srand(time(NULL)); 
	
	for(int i=0;i<10;i++){
		o[i]=50+(rand()%51);
	}
	
	for(int i=0;i<10;i++){
		c[i]=o[i]*0.5;
	}
	
	for(int i=0;i<10;i++){
		cout<<"\n\t"<<o[i]<<"\t"<<c[i]<<endl;
	}

	cout<<"\n\n"<<endl;		
	system("pause");
	return 0;
}






