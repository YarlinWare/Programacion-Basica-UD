#include<iostream>

using namespace std;

int main(){
    
    char caracter;
    int entero, opcion;
    
    cout<<"Digite según la opcion de su prefereincia: "<<endl;
    cout<<"1. ENTERO ---> ASCII "<<endl;
    cout<<"2. ASCII  ---> ENTERO "<<endl;
    cin>>opcion;
    
    if(opcion == 1) {
        cout<<"Digite un entero: "<<endl;
        cin>>entero;
        caracter=entero;
        cout<<"entero: "<<entero<<"\tcaracter: "<<caracter<<"\n"<<endl;
    }
    else if(opcion == 2){
        cout<<"Digite un caracter: "<<endl;
        cin>>caracter;
        entero=caracter;
        cout<<"caracter: "<<caracter<<"\tentero: "<<entero<<"\n"<<endl;
    }
    else{
        cout<<"Opcion invalida...\a \n\n"<<endl;
    }
    
    system("PAUSE");
    return 0;
}
