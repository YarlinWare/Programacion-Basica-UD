#include <iostream>

using namespace std;

//----------------------------Variables Globales----------------------------
// variable 1 y 2	/ contadores	/arreglos 3 datos (variables y resultado)
int a, b, d, e, n[11], m[11], r[11], x, h;


//Funcion que verifica que el numero ingresado sea entero positivo (incluyendo el cero)
int validando (int variable){	
    do{
        cout<<"\n  Ingrese un numero: ";
        cin>>variable;
        if(variable < 0 || variable > 999){
            cout<<"\tNumero invalido..."<<endl;
        }
    }while(variable < 0 || variable > 999 );    
    return variable;
}

//Funcion suma Binaria
int suma_binaria(int numero_uno[], int numero_dos[]){	
	int numero_suma;
	//operacion para resultado
		for(int c=0;c<11;c++){
			x=n[c]+m[c];
			if(x==0){
				r[c]=0;
				//acarreo[c]=0;
			}	
			if(x==1){
				r[c]=1;
				//acarreo[c]=0;
			}
			if(x==2){
				r[c]=0;
				n[c+1]=n[c+1]+1;
				//acarreo[c]=1;
			}
			if(x==3){
				r[c]=1;
				n[c+1]=n[c+1]+1;
				//acarreo[c]=0;
				//acarreo[c+1]=1;
			}
		}			
	return numero_suma;	
}


main(){	
	//usuario ingresa los dos valores decimaes enteros
	cout<<"Digite dos numeros maximo 3 digitos\n\n"<<endl;
	a=validando(a);
	b=validando(b); 
	
	//****--------------------****** SUMA DECIMAL ****--------------------******				
	cout<<endl<<"  SUMA DECIMAL"<<endl<<"  "<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<"\n"<<endl;
	
	
	//****--------------******ARREGLO: ENTERO A BINARIO****--------------******
		
		//Primer valor	
	for(int c=0;c<11;c++){
		if(a==0){
		n[c]=0;
		}
		else{
			d=c;
		}
		n[c]=a%2; 
		a=a/2;
	}
		
	//Segundo valor
	for(int c=0;c<11;c++){
		if(b==0){
		m[c]=0;
	}
	else{
		e=c;
	}
		m[c]=b%2; 
		b=b/2;
	}
		
	//****--------------------****** SUMA BINARIA ****--------------------******
				
	cout<<endl<<"  SUMA BINARIA"<<endl<<"  ";			
	//primer numero
	for(d;d>=0;d--){
		cout<<n[d];
	}			
	cout<<" + ";		
	//segundo numero
	for(e;e>=0;e--){
		cout<<m[e];
	}		
	//Laçlamado a la función para proceder con la suma	
	int suma=suma_binaria(n,m);					
	cout<<" = ";
	//organizar resultado
	for(int c=0;c<11;c++){
		if(r[c]==1){
			h=c;
		}
	}	
	//imprimir resultado
	for(int c=h;c>=0;c--){
		cout<<r[c];
	}
	//****--------------------****** RESTA BINARIA ****--------------------******
	cout<<endl<<"  RESTA DECIMAL"<<endl<<"  "<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<"\n"<<endl;
	//primer numero
	for(d;d>=0;d--){
		cout<<n[d];
	}			
	cout<<" - ";		
	//segundo numero
	for(e;e>=0;e--){
		cout<<m[e];
	}		
	cout<<" = ";
	
	
		//Primer valor	
	for(int c=0;c<11;c++){
		if(a==0){
		n[c]=0;
		}
		else{
			d=c;
		}
		n[c]=a%2; 
		a=a/2;
	}
	
	
	
	
	
	//organizar resultado
	for(int c=0;c<11;c++){
		if(r[c]==1){
			h=c;
		}
	}	
	//imprimir resultado
	for(int c=h;c>=0;c--){
		cout<<r[c];
	}
	
	
	
	//****--------------------****** MULTIPLICACION BINARIA ****--------------------******
	cout<<endl<<"  MULTIPLICACION DECIMAL"<<endl<<"  "<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<"\n"<<endl;
	//primer numero
	for(d;d>=0;d--){
		cout<<n[d];
	}			
	cout<<" x ";		
	//segundo numero
	for(e;e>=0;e--){
		cout<<m[e];
	}		
	cout<<" = ";
	
	
	
	//****--------------------****** DIVISION BINARIA ****--------------------******
	cout<<endl<<"  DIVISION DECIMAL"<<endl<<"  "<<a<<" / "<<b<<" = "<<a/b<<endl;
	cout<<"\n"<<endl;
	//primer numero
	for(d;d>=0;d--){
		cout<<n[d];
	}			
	cout<<" / ";		
	//segundo numero
	for(e;e>=0;e--){
		cout<<m[e];
	}		
	cout<<" = ";
	
	
	cout<<"\n\n";		
	system("pause");	
	}
