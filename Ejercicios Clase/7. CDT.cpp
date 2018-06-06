#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	float capital,interes,valor_futuro;
	int anios, opcion_tiempo, N, i;
	cout<<"Capital a invertir: "<<endl;
    cin>>capital;
    cout<<"Taza de interes anual (%): "<<endl;
    cin>>interes;
    cout<< "Cantidad de Anios "<<endl;
    cin>>anios;
    cout<< "Escoja segun corresponda: "<<endl;
    cout<< "1. Mensual"<<endl;
    cout<< "2. Trimestral "<<endl;
    cout<< "3. Semestral "<<endl;
    cout<< "4. Anual "<<endl;
    cin>> opcion_tiempo;
	valor_futuro=(capital*((1+(i/100))^N));	
	switch(opcion_tiempo){
		case 1:
			i=interes/12;
            N=anios*12;
            valor_futuro=(capital*((1+(i/100))^N));
			cout<<"Capital de inversion: "<< capital<<endl;
			cout<<"Taza interes anual: "<< interes<<"%"<<endl;
			cout<<"Efectivo por periodo de tiempo: "<< i<<"%"<<endl;
			cout<<"Valor a futuro: "<<valor_futuro<<endl;
		break;
		case 2:
			i= interes/4;
            N=anios*4;
            valor_futuro=(capital*((1+(i/100))^N));
			cout<<"Capital de inversion: "<< capital<<endl;
			cout<<"Taza interes anual: "<< interes<<"%"<<endl;
			cout<<"Efectivo por periodo de tiempo: "<< i<<"%"<<endl;
			cout<<"Valor a futuro: "<<valor_futuro<<endl;
		break;
		case 3: 
			i= interes/2;
            N=anios*2;
            valor_futuro=(capital*((1+(i/100))^N));
			cout<<"Capital de inversion: "<< capital<<endl;
			cout<<"Taza interes anual: "<< interes<<"%"<<endl;
			cout<<"Efectivo por periodo de tiempo: "<< i<<"%"<<endl;
			cout<<"Valor a futuro: "<<valor_futuro<<endl;
		
		break;
		case 4: 
			i= interes/1;
            N=anios*1;
            valor_futuro=(capital*((1+(i/100))^N));
			cout<<"Capital de inversion: "<< capital<<endl;
			cout<<"Taza interes anual: "<< interes<<"%"<<endl;
			cout<<"Efectivo por periodo de tiempo: "<< i<<"%"<<endl;
			cout<<"Valor a futuro: "<<valor_futuro<<endl;
		
		break;
		default: cout << "No se reconocio el numero";
	}
	cout<<"\n";
	system("pause");

	return 0;
}
