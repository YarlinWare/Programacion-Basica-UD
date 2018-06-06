#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int N, Auxiliar,i,j;
    cout<<"Digite el tamanio del vector A[ ]: ";
    cin>>N;
    int A[N];
    //Almacenando valores en el arreglo
    while(i<N){
        cout<<"A["<<i<<"]: \t";
        cin>>A[i];
        i++;
    }
    
    //Mostrando tamaño del Vetor
    cout<<"\nTamaño del Vector\n";
    cout<<"\tA[ "<<N<<" ]\n";
    
    //Contenido del vector original
    cout<<"\nVector Original\n";
    cout<<"\tA";
    for(i=0;i<N;i++)  	
   		cout<<"[ "<<A[i]<<" ]";     
	cout<<" "<<endl;	
	
    
    //Organizando variable de mayor a menor	  
    for(i=0;i<N;i++){
    	for(j=(i+1);j<N;j++){
    		
    		if(A[i]>A[j]){
    			A[i]=A[i];
				
			}else{
				Auxiliar=A[i];
				A[i]=A[j];
				A[j]=Auxiliar;
			}			
		}
	}
	cout<<"\nVector Mayor a Menor\n"; 	
	cout<<"\tA";
	for(i=0;i<N;i++){   	
   		cout<<"[ "<<A[i]<<" ]";     
	}cout<<" "<<endl;	
	
	
	//Organizando Variable de menor a mayor
	cout<<"\nVector Menor a mayor\n";
	j=N-1;
	cout<<"\tA ";
    for(i=j;i>=0;i--)		   	
   		cout<<"[ "<<A[i]<<" ]";    
	cout<<"\n"<<endl;
       
    system("PAUSE");
    return 0;


}
