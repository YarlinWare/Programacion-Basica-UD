#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){	
	system("cls");
	char c;
	fstream archivo ("ascii.txt",ios::in);
	if(!archivo){
		cout<<"No se puede abrir el archivo ascii.txt"<<endl;
	}else{
		archivo>>c;
		while(!archivo.eof()){
			cout<<c;
			archivo>>c;
		}
		archivo.close();
	}
    return 0;
} 
