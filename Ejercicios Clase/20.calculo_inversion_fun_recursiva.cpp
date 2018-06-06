#include<iostream>

using namespace std;

//funcion recursiva
double capital_final(int c, float x, int n){	
	if(n==0)
		return c;
	else
		return capital_final(c, x, n-1) + (capital_final(c, x, n-1)*(x/100));
}


int main(){
	int capital, interes_anual; 
	int anios;
	
	cout<<"\n\tCalculo de inversion \n\n";
	
	cout<<"\n\tCapital a invertir: ";
    cin>>capital;
    cout<<"\n\tTaza de interes anual (%): ";
    cin>>interes_anual;
    cout<< "\n\tCantidad de Anios ";
    cin>>anios;
    cout<<"\n\n\tResultados \n\n";
    
	cout<<"\n\tCapital de inversion: "<<capital<<endl;
	cout<<"\n\tTaza interes anual: "<< interes_anual<<"%"<<endl;
	cout<<"\n\tValor a futuro: "<<capital_final(capital,interes_anual,anios)<<endl;	
	
	cout<<"\n\n";
	system("PAUSE");
}
