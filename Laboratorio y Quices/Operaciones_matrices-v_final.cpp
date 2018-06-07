#include<stdlib.h>
#include<iostream>
#include <time.h>
#include <string>
using namespace std;
int matriz_A[10][10], matriz_B[10][10],i,j,fila,columna_A,columna_B;



int llenado_matriz_auto(int k, int l){
	int variable;
	variable=1+rand()%9;
	return variable;
}

int validando_multi(){
	int opcion;
	cout<<"\n\t Menu: \n\t1. Matrices del mismo tamanio (conservando las anteriores).\n\t2. Matrices diferente tamanio."<<endl;		
	do{
		cout<<"\n\t Opcion:  ";
		cin>>opcion;
		if(opcion !=1 && opcion !=2)
			cout<<"\n\t\t Numero invalido, intente nuevamente.... \n"<<endl;
	}while(opcion !=1 && opcion !=2);	
	return opcion;
}

int validando_menu(int menu){
			
	while(menu !=1 && menu !=2){
		if(menu !=1 && menu !=2)
			cout<<"\n\t\tNumero invalido, intente nuevamente.... \n"<<endl;
			cin>>menu;
	}	
	return menu;
}

void multiplicacion_nxn(int m_a[][10],int m_b[][10],int f){
	cout<<"\n\n";
	int matriz_resultado[f][f];	
	//Multiplicación de las matrices	
	for(i=0;i<f;i++){
        for(j=0;j<f;j++){      
			matriz_resultado[i][j]=0;
        	for(int k=0;k<f;k++){
        		matriz_resultado[i][j]=matriz_resultado[i][j]+(matriz_A[i][k]*matriz_B[k][j]);   		
			}  			
		}     				       	        	
	} 	
	//imprimir matriz resultado
	for(i=0;i<f;i++){
        	for(j=0;j<f;j++){
        	cout<<"\t"<<matriz_resultado[i][j]; 
			} 			
			cout<<"\n";
		} 
}

void multiplicacion_nxm(int m_a[][10],int m_b[][10],int f,int c_A, int c_B){	
	int matriz_resultado[f][c_B];		
	cout<<"\n\n\n";
	//Multiplicación de las matrices	
	for(i=0;i<f;i++){
        for(j=0;j<c_B;j++){      
			matriz_resultado[i][j]=0;
        	for(int k=0;k<c_A;k++){
        		matriz_resultado[i][j]=matriz_resultado[i][j]+(matriz_A[i][k]*matriz_B[k][j]);   		
			}  			
		}     				       	        	
	} 	
	//imprimir matriz resultado
	for(i=0;i<f;i++){
        	for(j=0;j<c_B;j++){
        	cout<<"\t"<<matriz_resultado[i][j]; 
			} 			
			cout<<"\n";
		} 
}

int suma(int m_a[][10],int m_b[][10],int f){
	
	int matriz_resultado[f][f];	
	//Multiplicación de las matrices	
	for(i=0;i<f;i++){
        for(j=0;j<f;j++){      
			matriz_resultado[i][j]=0;
        	matriz_resultado[i][j]=(matriz_A[i][j]+matriz_B[i][j]);   		  			
		}     				       	        	
	} 	
	//imprimir matriz resultado
	for(i=0;i<f;i++){
        	for(j=0;j<f;j++){
        	cout<<"\t"<<matriz_resultado[i][j]; 
			} 			
			cout<<"\n";
		} 	
}

int resta(int m_a[][10],int m_b[][10],int f){
	int matriz_resultado[f][f];	
	//Multiplicación de las matrices	
	for(i=0;i<f;i++){
        for(j=0;j<f;j++){      
			matriz_resultado[i][j]=0;
        	matriz_resultado[i][j]=(matriz_A[i][j]-matriz_B[i][j]);   		  			
		}     				       	        	
	} 	
	//imprimir matriz resultado
	for(i=0;i<f;i++){
        	for(j=0;j<f;j++){
        	cout<<"\t"<<matriz_resultado[i][j]; 
			} 			
			cout<<"\n";
		} 
}


int main(){
	system("color f1");	
	int opcion,retornar=1,opcion_menu;
	srand(time(NULL)); 		
	cout<<"\n\t ****------------- OPERACION CON MATRICES -------------****\n";	
	
	cout<<"\n\tIngrese opcion de preferencia: ";
	cout<<"\n\t1. Grenerar matrices aleatorias determinando numero de orden. ";
	cout<<"\n\t2. Determinar numero de orden e ingresar los valores de cada matriz.";
	cout<<"\n\t>> ";
	cin>>opcion_menu;

	opcion_menu=validando_menu(opcion_menu);
	
	
//---------------------------------------LLenado Auomatico----------------------------------------		
	if(opcion_menu==1){		
		while(retornar!=0){			
			system("cls");			
			cout<<"\n\t Siendo dos matrices cuadradas ingrese el numero de orden: ";
			cin>>fila;			
			//llenado de la matriz_A
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++){
		       		matriz_A[i][j]=llenado_matriz_auto(i,j); 
					}       		       	        	
			} 		
			//llenado de la matriz_B
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++){
		        	matriz_B[i][j]=llenado_matriz_auto(i,j);
					}       		       	        	
				} 

			//imprimir matriz_A
			cout<<"\n\t***------ Matriz A ------***\n\n";
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++)
			        cout<<"\t"<<matriz_A[i][j];
			    cout<<"\n";   
		    }
		    cout<<"\n\n";
			//imprimir matriz_B
			cout<<"\n\t***------ Matriz B ------***\n\n"; 
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++)
			        cout<<"\t"<<matriz_B[i][j];
			    cout<<"\n";   
		    }
		    cout<<"\n\n";
	    	
		    cout<<"\n\t***------      Suma      ------***\n\n"; 
		    	
		   	suma(matriz_A,matriz_B, fila);
		    	
		    cout<<"\n\t***------      Resta     ------***\n\n"; 
		    	
		    resta(matriz_A,matriz_B, fila);		
		    
			cout<<"\n\t***------ Multiplicacion ------***\n\n"; 
			opcion=validando_multi();			
		
			if(opcion==1){				    	
		    		    	
		    	//Imprimir la multiplicación de las matrices A Y B		    	
		    	multiplicacion_nxn(matriz_A,matriz_B, fila);		
			}
			
			
			if(opcion==2){
				cout<<"\n\tSiendo dos matrices ingrese el tamaño de cada una.\n\t";
				cout<<"\n\tNota: recuerde que el numero de columnas de la Matriz_A corresponde al ";
				cout<<"\n\tnumero de filas de la Matriz_B:\n\n";
				cout<<"\n\t***------ Matriz A ------***\n\n";
				cout<<"\n\tNumero de filas: ";
				cin>>fila;	
				cout<<"\n\tNumero de columnas: ";
				cin>>columna_A;	
				cout<<"\n\t ingreso: "<<columna_A;
				
				//en caso de que se ingrese un numero negativo	
				if(fila<0)
					fila=(fila*(-1));
				if(columna_A<0)
					columna_A=(columna_A*(-1));
				//--------------------------------------------
				
				cout<<"\n\t***------ Matriz B ------***\n\n";
				cout<<"\n\tNumero de filas: "<<columna_A<<endl;;
				cout<<"\n\tNumero de columnas: ";
				cin>>columna_B;
				
				//en caso de que se ingrese un numero negativo
				if(columna_B<0)
					columna_B=(columna_B*(-1));	
				//--------------------------------------------
				
				//llenado de la matriz_A
				for(i=0;i<fila;i++){
		        	for(j=0;j<columna_A;j++){
		        	matriz_A[i][j]=llenado_matriz_auto(i,j); 
					}       		       	        	
				} 		
				//llenado de la matriz_B
				for(i=0;i<columna_A;i++){
		        	for(j=0;j<columna_B;j++){
		        	matriz_B[i][j]=llenado_matriz_auto(i,j);
					}       		       	        	
				} 
				
				//imprimir matriz_A
				cout<<"\n\t***------ Matriz A ------***\n\n";
				for(i=0;i<fila;i++){
		        	for(j=0;j<columna_A;j++)
			            cout<<"\t"<<matriz_A[i][j];
			        cout<<"\n";   
		    	}
		    	cout<<"\n\n";
				//imprimir matriz_B
				cout<<"\n\t***------ Matriz B ------***\n\n"; 
				for(i=0;i<columna_A;i++){
		        	for(j=0;j<columna_B;j++)
			            cout<<"\t"<<matriz_B[i][j];
			        cout<<"\n";   
		    	}
		    	cout<<"\n\n";
		    	
		    	//Imprimir la multiplicación de las matrices A Y B
		    	cout<<"\n\t***------ Multiplicacion ------***\n\n"; 
		    	
		    	multiplicacion_nxm(matriz_A,matriz_B, fila,columna_A,columna_B);
				cout<<"\n\n\t";
						
			}
			
			cout<<"\n\tDesea generar nuevas matrices automaticamente?"; 
			cout<<"\n\tEscriba (0) para finalizar";
			cout<<"\n\tCualquier numero para retornar\n";
			cout<<"\n\t>> ";
			cin>>retornar;
			system("cls");
			
		}		
	}
	
//---------------------------------------LLenado Manual----------------------------------------	
	
	if(opcion_menu==2){
		while(retornar!=0){			
			system("cls");			
			cout<<"\n\t Siendo dos matrices cuadradas ingrese el numero de orden: ";
			cin>>fila;			
			//llenado de la matriz_A
			int valor;
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++){
		        	cout<<"\tA["<<i<<"]"<<"["<<j<<"]";	 
					cin>>valor;
					matriz_A[i][j]=valor;       	
				}		        	
			    cout<<"\n";   
		    }		
			
					
			//llenado de la matriz_B
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++){
		        	cout<<"\tB["<<i<<"]"<<"["<<j<<"]";	 
					cin>>valor;
					matriz_B[i][j]=valor;       	
				}		        	
			    cout<<"\n";   
		    }
			
			//imprimir matriz_A
			cout<<"\n\t***------ Matriz A ------***\n\n";
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++)
			        cout<<"\t"<<matriz_A[i][j];
			    cout<<"\n";   
		    }
		    cout<<"\n\n";
			//imprimir matriz_B
			cout<<"\n\t***------ Matriz B ------***\n\n"; 
			for(i=0;i<fila;i++){
		        for(j=0;j<fila;j++)
			        cout<<"\t"<<matriz_B[i][j];
			    cout<<"\n";   
		    }
		    cout<<"\n\n";
		    	
		    cout<<"\n\t***------      Suma      ------***\n\n"; 
		    	
		   	suma(matriz_A,matriz_B, fila);
		    	
		    cout<<"\n\t***------      Resta     ------***\n\n"; 
		    	
		    resta(matriz_A,matriz_B, fila);		
		    
			cout<<"\n\t***------ Multiplicacion ------***\n\n"; 
		    	
		    multiplicacion_nxn(matriz_A,matriz_B, fila);		
			
			
			cout<<"\n\tDesea generar nuevas matrices con otros valores?"; 
			cout<<"\n\tEscriba (0) para finalizar";
			cout<<"\n\tCualquier numero para retornar\n";
			cout<<"\n\t>> ";
			cin>>retornar;
			system("cls");
		}
	}
	system("PAUSE");
}
