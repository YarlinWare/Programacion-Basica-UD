#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<string>
#include<vector> 
#include <cstdlib> // libreria que contiene atoi convertir cadenas a int o float
using namespace std;


int cti(string cl){ // funcion que convierte cadena a int
        return atof(cl.c_str());
}
void mostrar(string Triqui[3][3]){ // mostrar por pantalla el juego del triqui actual
	cout<<"\t-------------------------"<<endl;
	for(int ii=0;ii<3;ii++){
		for(int jj=0;jj<3;jj++){
			if(Triqui[ii][jj]!="O" && Triqui[ii][jj]!="X"){
				cout<<"\t|"<<" ";
			}
			else{
				cout<<"\t|"<<Triqui[ii][jj];
			}
		}
		cout<<"\t|"<<endl;
		cout<<"\t-------------------------"<<endl;
	}
	cout<<endl;
}
bool pertenece(vector<int> v,int x){ // verifica si el numero x pertenece al vector v
	bool mm=false;
	for(int ii=0;ii<v.size();ii++){
		if(v.at(ii)==x){
			mm=true;
			break;
		}
	}
	return mm;
}
void resetear(string Triqui[3][3]){ // resetea el juego para volver a jugar
	for(int ii=0;ii<3;ii++){
		for(int jj=0;jj<3;jj++){
			Triqui[ii][jj]=" ";
		}
	}
}
/*___________________________PC ANALIZA EL JUEGO Y TOMA UNA DESICION___________________________*/
int eleccion_computador(string Triqui[3][3],int casillas_ocupadas){ // la computadora analiza el juego y toma una eleccion
	srand(time(NULL));
	int eleccion;
	int contador;
	contador=1;
	if(casillas_ocupadas>=3){ // para que el computador escoja una casilla que al marcarla gane el juego debe existir por lo menos 3 casillas ya jugadas
		for(int ii=0;ii<3;ii++){
			for(int jj=0;jj<3;jj++){
				if(Triqui[ii][jj]=="O" || Triqui[ii][jj]=="X"){
					casillas_ocupadas+=1;
				}
			}
		}
		contador=1;
		/*verifica en cada fila del triqui si hay un lugar en el cual 
		el computador pueda ganar o bloquear un lugar 
		para que el humano no gane en la siguiente partida */
		for(int ii=0;ii<3;ii++){ 				
			if(Triqui[ii][0]=="O" && Triqui[ii][1]=="O" && Triqui[ii][2]!="X" || Triqui[ii][0]=="X" && Triqui[ii][1]=="X" && Triqui[ii][2]!="O"){
				eleccion=contador+2;
			}
			if(Triqui[ii][0]=="O" && Triqui[ii][1]!="X" && Triqui[ii][2]=="O" || Triqui[ii][0]=="X" && Triqui[ii][1]!="O" && Triqui[ii][2]=="X"){
				eleccion=contador+1;
			}
			if(Triqui[ii][0]!="X" && Triqui[ii][1]=="O" && Triqui[ii][2]=="X" || Triqui[ii][0]!="O" && Triqui[ii][1]=="X" && Triqui[ii][2]=="X"){
				eleccion=contador;
			}
			contador=contador+3;
		}
		contador=7;
		for(int ii=0;ii<3;ii++){ 
		/*verifica en cada columna del triqui si hay un lugar en el 
		cual el computador pueda ganar o bloquear un lugar 
		para que el humano no gane en la siguiente partida */
			if(Triqui[0][ii]=="O" && Triqui[1][ii]=="O" && Triqui[2][ii]!="X" || Triqui[0][ii]=="X" && Triqui[1][ii]=="X" && Triqui[2][ii]!="O"){
				eleccion=contador;
			}
			if(Triqui[0][ii]=="O" && Triqui[1][ii]!="X" && Triqui[2][ii]=="O" || Triqui[0][ii]=="X" && Triqui[1][ii]!="O" && Triqui[2][ii]=="X"){
				eleccion=contador-3;
			}
			if(Triqui[0][ii]!="X" && Triqui[1][ii]=="O" && Triqui[2][ii]=="O" || Triqui[0][ii]!="O" && Triqui[1][ii]=="X" && Triqui[2][ii]=="X"){
				eleccion=contador-6; 
			}
			contador=contador+1;
		} 
		/*verifica en cada columna del triqui si hay un lugar en el 
		cual el computador pueda ganar o bloquear un lugar 
		para que el humano no gane en la siguiente partida */
		if(Triqui[0][0]=="O" && Triqui[1][1]=="O" && Triqui[2][2]!="X" || Triqui[0][0]=="X" && Triqui[1][1]=="X" && Triqui[2][2]!="O"){
			eleccion=9;
		}
		if(Triqui[0][0]=="O" && Triqui[1][1]!="X" && Triqui[2][2]=="O" || Triqui[0][0]=="X" && Triqui[1][1]!="O" && Triqui[2][2]=="X"){
			eleccion=5;
		}
		if(Triqui[0][0]!="X" && Triqui[1][1]=="O" && Triqui[2][2]=="O" || Triqui[0][0]!="O" && Triqui[1][1]=="X" && Triqui[2][2]=="X"){
			eleccion=1;
		}
		if(Triqui[2][0]=="O" && Triqui[1][1]=="O" && Triqui[0][2]!="X" || Triqui[2][0]=="X" && Triqui[1][1]=="X" && Triqui[0][2]!="O"){
			eleccion=3;
		}
		if(Triqui[2][0]=="O" && Triqui[1][1]!="X" && Triqui[0][2]=="O" || Triqui[2][0]=="X" && Triqui[1][1]!="O" && Triqui[0][2]=="X"){
			eleccion=5;
		}
		if(Triqui[2][0]!="X" && Triqui[1][1]=="O" && Triqui[0][2]=="O" || Triqui[2][0]!="O" && Triqui[1][1]=="X" && Triqui[0][2]=="X"){
			eleccion=7;
		}
		if(eleccion!=1 && eleccion!=2 && eleccion!=3 && eleccion!=4 && eleccion!=5 && eleccion!=6 && eleccion!=7 && eleccion!=8 && eleccion!=9){
		eleccion=14;
		}
	}else{
		eleccion=14;
	}
	if(eleccion==14){ 
	//si no hay una casilla en la cual el computador pueda ganar o el computador pueda bloquear al humano se busca una casilla vacia 
	//y el computador toma una aleatoria 
		int cont=1;
		vector<int> casillas_vacias;
		for(int ii=0;ii<3;ii++){ //se le agrega al vector casillas_vacias las posiciones de las casillas del triqui vacias 
			for(int jj=0;jj<3;jj++){
				if(Triqui[ii][jj]!="O" && Triqui[ii][jj]!="X"){
					casillas_vacias.push_back(ii+jj+cont); //push_back:añade un elemento al final del vector
				}
			}
			cont+=2;
		}
		eleccion=casillas_vacias.at(rand()%(casillas_vacias.size())); //at: devuelve el elemento de una posición específica
	}
	return eleccion;
}
void marcar(string Triqui[3][3],int posicion,string X){ // marcar una posicion del triqui con la variable X 
	if(posicion==1){
		Triqui[0][0]=X;
	}
	if(posicion==2){
		Triqui[0][1]=X;
	}
	if(posicion==3){
		Triqui[0][2]=X;
	}
	if(posicion==4){
		Triqui[1][0]=X;
	}
	if(posicion==5){
		Triqui[1][1]=X;
	}
	if(posicion==6){
		Triqui[1][2]=X;
	}
	if(posicion==7){
		Triqui[2][0]=X;
	}
	if(posicion==8){
		Triqui[2][1]=X;
	}
	if(posicion==9){
		Triqui[2][2]=X;
	}
}
/*___________________________VERIFICA GANADOR___________________________*/
string ganador(string Triqui[3][3]){ // verifica quien es el ganador en la partida
	string gana;
	// verificando si gana el computador
	for(int i=0;i<3;i++){
		if((Triqui[i][0]=="O") && (Triqui[i][1]=="O") && (Triqui[i][2]=="O")){
			gana="O";
		}
	}
	for(int i=0;i<3;i++){
		if((Triqui[0][i]=="O") && (Triqui[1][i]=="O") && (Triqui[2][i]=="O")){
			gana="O";
		}
	}
	if((Triqui[0][0]=="O") && (Triqui[1][1]=="O") && (Triqui[2][2]=="O")){
		gana="O";
	}
	if((Triqui[2][0]=="O") && (Triqui[1][1]=="O") && (Triqui[0][2]=="O")){
		gana="O";
	}
	// verificando si gana el humano
	for(int i=0;i<3;i++){
		if((Triqui[i][0]=="X") && (Triqui[i][1]=="X") && (Triqui[i][2]=="X")){
			gana="X";
		}
	}
	for(int i=0;i<3;i++){
		if((Triqui[0][i]=="X") && (Triqui[1][i]=="X") && (Triqui[2][i]=="X")){
			gana="X";
		}
	}
	if((Triqui[0][0]=="X") && (Triqui[1][1]=="X") && (Triqui[2][2]=="X")){
		gana="X";
	}
	if((Triqui[2][0]=="X") && (Triqui[1][1]=="X") && (Triqui[0][2]=="X")){
		gana="X";
	}
	return gana;
}


/*___________________________TEXTOS FINAL JUEGO___________________________*/
void humano_gana(){
	cout<<"\n\n";	
	cout<<"\t\t                       dP     dP   .d888888  .d88888b   		      \n";
	cout<<"\t\t                       88     88  d8'    88  88.     		      \n";
	cout<<"\t\t                       88aaaaa88a 88aaaaa88a `Y88888b. 		      \n";
	cout<<"\t\t                       88     88  88     88        `8b 		      \n";
	cout<<"\t\t                       88     88  88     88  d8'   .8P 		      \n";
	cout<<"\t\t                       dP     dP  88     88   Y88888P  		      \n";
	cout<<"\t\t                       oooooooooooooooooooooooooooooooo		      \n";
	cout<<"\t\t                                                        		      \n";
	cout<<"\t\t          .88888.   .d888888  888888ba   .d888888  888888ba   .88888.  	\n";
	cout<<"\t\t         d8'   `88 d8'    88  88    `8b d8'    88  88    `8b d8'   `8b  	\n";
	cout<<"\t\t         88        88aaaaa88a 88     88 88aaaaa88a 88     88 88     88  	\n";
	cout<<"\t\t         88   YP88 88     88  88     88 88     88  88     88 88     88  	\n";
	cout<<"\t\t         Y8.   .88 88     88  88     88 88     88  88    .8P Y8.   .8P  	\n";
	cout<<"\t\t          `88888'  88     88  dP     dP 88     88  8888888P   `8888P'   	\n";
	cout<<"\t\t         oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo 	\n";
	cout<<"\n\n";
	
}
void pc_gana(){
	cout<<"\n\n";
	cout<<"\t\t                        dP     dP   .d888888  .d88888b   		      \n";
	cout<<"\t\t                        88     88  d8'    88  88.    	  		      \n";
	cout<<"\t\t                        88aaaaa88a 88aaaaa88a `Y88888b.  		      \n";
	cout<<"\t\t                        88     88  88     88        `8b  		      \n";
	cout<<"\t\t                        88     88  88     88  d8'   .8P  		      \n";
	cout<<"\t\t                        dP     dP  88     88   Y88888P   		      \n";
	cout<<"\t\t                        oooooooooooooooooooooooooooooooo 		      \n";
	cout<<"\t\t                                                         		      \n";
	cout<<"\t\t        888888ba   88888888b  888888ba  888888ba  dP 888888ba   .88888.   	\n";
	cout<<"\t\t        88    `8b  88         88    `8b 88    `8b 88 88    `8b d8'   `8b  	\n";
	cout<<"\t\t       a88aaaa8P' a88aaaa    a88aaaa8P' 88     88 88 88     88 88     88  	\n";
	cout<<"\t\t        88         88         88   `8b. 88     88 88 88     88 88     88  	\n";
	cout<<"\t\t        88         88         88     88 88    .8P 88 88    .8P Y8.   .8P  	\n";
	cout<<"\t\t        dP         88888888P  dP     dP 8888888P  dP 8888888P   `8888P'   	\n";
	cout<<"\t\t       oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo 	\n";	
	cout<<"\n\n";
}
void empate(){
	cout<<"\n\n";
	cout<<"\t\t        88888888b 8888ba.88ba   888888ba   .d888888  d888888P  88888888b     \n";
	cout<<"\t\t        88        88  `8b  `8b  88    `8b d8'    88     88     88            \n"; 
	cout<<"\t\t       a88aaaa    88   88   88 a88aaaa8P' 88aaaaa88a    88    a88aaaa        \n";
	cout<<"\t\t        88        88   88   88  88        88     88     88     88            \n";
	cout<<"\t\t        88        88   88   88  88        88     88     88     88            \n";
	cout<<"\t\t        88888888P dP   dP   dP  dP        88     88     dP     88888888P     \n";
	cout<<"\t\t       oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo    \n";
	cout<<"\n\n";
}
void titulo(){
	cout<<"\n\n";
	cout<<"\t   ooooooooooooo ooooooooo.   ooooo   .oooooo.      ooooo     ooo ooooo        ooooo     ooo oooooooooo.\n";
	cout<<"\t   8'   888   `8 `888   `Y88. `888'  d8P'  `Y8b     `888'     `8' `888'        `888'     `8' `888'   `Y8b\n";
	cout<<"\t        888       888   .d88'  888  888      888     888       8   888          888       8   888      888\n";
	cout<<"\t        888       888ooo88P'   888  888      888     888       8   888          888       8   888      888\n";
	cout<<"\t        888       888`88b.     888  888      888     888       8   888  88888   888       8   888      888\n";
	cout<<"\t        888       888  `88b.   888  `88b    d88b     `88.    .8'   888          `88.    .8'   888     d88'\n";
	cout<<"\t       o888o     o888o  o888o o888o  `Y8bood8P'Ybd'    `YbodP'    o888o           `YbodP'    o888bood8P'\n";                                                                        
	cout<<"\n\n";                                         
	cout<<"\t\t\t\t         .oooo.     .oooo.     .o   .ooooo.  \n";    
	cout<<"\t\t\t\t       .dP\"\"Y88b   d8P'`Y8b  o888  d88'   `8.\n";  
	cout<<"\t\t\t\t             ]8P' 888    888  888  Y88..  .8'\n";
	cout<<"\t\t\t\t           .d8P'  888    888  888   `88888b. \n";
	cout<<"\t\t\t\t         .dP'     888    888  888  .8'  ``88b\n";
	cout<<"\t\t\t\t       .oP     .o `88b  d88'  888  `8.   .88P\n";
	cout<<"\t\t\t\t       8888888888  `Y8bd8P'  o888o  `boood8' \n";
	cout<<"\n\n";
}
/*___________________________ FUNION PRINCIPAL ___________________________*/
int main () {
	string Triqui [3][3];
	int Dadoh=0,Dadoc=0,first=0,second=0; //Se definen variables 
	string desicion;
	string pdado; //se define la variable para lanzar el dado
	int computador,humano;
	string humano2;
	int contadoreglas=1;
	srand(time(NULL));
	system("color f1");
	/* -------------------------------- Presentación Juego -------------------------------- */
	titulo();
	cout<<"\n\n\t *** *******************************   REGLAS DEL JUEGO   *******************************  ***"<<endl;
	cout<<"\t *                                                                                           *"<<endl;
	cout<<"\t * I   El juego es usuario vs la computadora.                                                *"<<endl;
	cout<<"\t * II  Deberas seguir las instrucciones tal y como las plantea el programa.                  *"<<endl;
	cout<<"\t * III Para llenar una casilla deberas oprimir el numero de la respectiva casilla,           *"<<endl;
	cout<<"\t *     para saber que casilla es cuenta desde arriba a la izquierda [1], hacia la derecha,   *"<<endl;
	cout<<"\t *     bajando a la siguiente columna leyendo de izquierda a derecha, hasta llegar a la      *"<<endl;
	cout<<"\t *     ultima posicion, la cual es abajo a la derecha [9].                                   *"<<endl;
	cout<<"\t * IV  El simbolo del usuario es 'X' y el de la computadora es 'O'.                          *"<<endl;
	cout<<"\t *                                                                                           *"<<endl;
	cout<<"\t *** *******************************   ****************   *******************************  ***"<<endl;
	cout<<"\n\t  Ejemplo: "<<endl;
	cout<< " "<<endl;
	/* -------------------------------- Tablero de Ejemplo -------------------------------- */
	cout<<"\n\t-------------------------"<<endl;
			for(int ii=0;ii<3;ii++){
				for(int jj=0;jj<3;jj++){
						if(Triqui[ii][jj]!="O" && Triqui[ii][jj]!="X"){
							cout<<"\t|"<<" "<<contadoreglas<<" ";
							contadoreglas++;
						}
					}
				cout<<"\t|"<<endl;
				cout<<"\t-------------------------"<<endl;
			}
			cout<<endl;
	cout<<"\n\t \n\n"<<endl;	
	system("pause");
	system("cls");
	titulo();	
	cout<<"\n\n\t¡Bienvenido al juego del triqui!"<<endl;
	do {
		do{
			do{
				/*_________________________Lanzamient dado_________________________*/
				cout<<"\n\tlance su dado oprimiendo 'd' (dado): "; //Se lanza el dado
				cin>>pdado;
				if(pdado!="d"){
					cout<<"\n\tentrada invalida"<<endl;
				}
			}while (pdado != "d");//unicamente se lanza el dado mientras que el usuario oprima d
			
			/*_________________________Generar randons para los dados_________________________*/
			Dadoh = 1+rand()%(7-1);//se generan los numeros lanzados por el dado humano
			cout<<"\n\tEl usuario obtuvo: "<<Dadoh<<endl;
			Dadoc = 1+rand()%(7-1);//se generan los numeros lanzados por el dado de la maquina
			cout<<"\n\tLa computadora obtuvo: "<<Dadoc<<endl;
			
			/*_____________________Cuando se generar los mismos resultados_____________________*/
			if (Dadoc == Dadoh){
				cout<<"\n\tSacaron el mismo numero, vuelvan a lanzar los dados"<<endl;			
			}else{
			}
		}while (Dadoh == Dadoc);//se creo para lanzar nuevamente el dado en caso de empate
		
		/*__________________Definiendo el jugador que inicia__________________*/
		if (Dadoh>Dadoc){
			cout<<"\n\tEmpieza el usuario"<<endl;
			first = Dadoh;//variable first como primer para llenar la matriz
			second = Dadoc;//variable second como segundo para llenar la matriz
		}else{
			cout<<"\n\tEmpieza la computadora"<<endl;
			first = Dadoc;
			second = Dadoh;
		}
		
		/*__________________TRIQUI__________________*/
		int kk=1;
		int cc; // cc=0 empieza el humano, cc=1 empieza el computador
		mostrar(Triqui);
		if(Dadoh>Dadoc){ // es turno del humano
			cc=0;
			
		}else{ // es turno de la computadora
			cc=1;
		}
		
		string g; // g es el ganador
		int casillas_ocupadas; // cantidas de casillas ya jugadas
		if(cc==0){
			while(kk<=5){
				int cont=1;
				vector<int> casillas_vacias;
				for(int ii=0;ii<3;ii++){
					for(int jj=0;jj<3;jj++){
						if(Triqui[ii][jj]!="O" && Triqui[ii][jj]!="X"){
							casillas_vacias.push_back(ii+jj+cont);
						}
					}
					cont+=2;
				}
				do{
				cout<<"\n\tEs tu turno,";
				cout<<"\n\tdigita el numero de la casilla donde quieras jugar: ";
				cin>>humano2;
				cout<<" "<<endl;
				humano=cti(humano2);
				if(pertenece(casillas_vacias,humano)!=true){
					cout<<"\n\tentrada invalida"<<endl;
				}
				}while(pertenece(casillas_vacias,humano)!=true);
				marcar(Triqui,humano,"X");
				mostrar(Triqui);
				if(kk>=3){ // despues de la quinta partida existe la posibilidad de que haya un ganador
					g=ganador(Triqui);
					if(g=="X"){
						humano_gana();
						system("color 2f");
						break;
					}
					if(g=="O"){
						pc_gana();
						cout<<"\n\t\t\t ************ La computadora gana ************ "<<endl;
						system("color 4f");
						break;
					}
				}
				if(kk!=5){
					cout<<"\n\tEs turno de la computadora"<<endl;
					casillas_ocupadas=0;
					for(int ii=0;ii<3;ii++){
						for(int jj=0;jj<3;jj++){
							if(Triqui[ii][jj]=="O" || Triqui[ii][jj]=="X"){
								casillas_ocupadas+=1;
							}
						}
					}
					computador=eleccion_computador(Triqui,casillas_ocupadas);
					cout<<computador<<endl;
					marcar(Triqui,computador,"O");
					mostrar(Triqui);
					g=ganador(Triqui);
					if(g=="X"){
						humano_gana();						
						system("color 2f");
						break;
					}
					if(g=="O"){
						pc_gana();
						cout<<"\n\t\t\t ************ La computadora gana ************ "<<endl;
						system("color 4f");
						break;
					}
				}
			kk++;
			}
			if(g!="O" && g!="X"){ // si no hay un ganador entonces es un empate
				system("color 6f");
				empate();
				
			}	
		}
		if(cc==1){
			while(kk<=5){
				cout<<"\n\tEs turno de la computadora"<<endl;
				casillas_ocupadas=0;
				for(int ii=0;ii<3;ii++){
					for(int jj=0;jj<3;jj++){
						if(Triqui[ii][jj]=="O" || Triqui[ii][jj]=="X"){
							casillas_ocupadas+=1;
						}
					}
				}
				computador=eleccion_computador(Triqui,casillas_ocupadas);
				cout<<computador<<endl;
				marcar(Triqui,computador,"O");
				mostrar(Triqui);
				if(kk>=3){ // despues de la quinta partida existe la posibilidad de que haya un ganador
					g=ganador(Triqui);
					if(g=="O"){
						pc_gana();
						cout<<"\n\t\t\t ************ La computadora gana ************ "<<endl;
						system("color 4f");
						break;
					}
					if(g=="X"){
						humano_gana();
						system("color 2f");
						break;
					}
				}
				if(kk!=5){
					int cont=1;
					vector<int> casillas_vacias;
					for(int ii=0;ii<3;ii++){
						for(int jj=0;jj<3;jj++){
							if(Triqui[ii][jj]!="O" && Triqui[ii][jj]!="X"){
								casillas_vacias.push_back(ii+jj+cont);
							}
						}
						cont+=2;
					}
					do{
					cout<<"\n\tEs tu turno:"<<endl;
					cin>>humano2;
					humano=cti(humano2);
					if(pertenece(casillas_vacias,humano)!=true){
						cout<<"\tentrada invalida"<<endl;
					}
					}while(pertenece(casillas_vacias,humano)!=true);
					marcar(Triqui,humano,"X");
					mostrar(Triqui);
					g=ganador(Triqui);
					if(g=="X"){
						humano_gana();
						system("color 2f");
						break;
					}
					if(g=="O"){
						pc_gana();
						cout<<"\n\t\t\t ************ La computadora gana ************ "<<endl;
						system("color 4f");
						break;
					}
				}
			kk++;
			}
			if(g!="O" && g!="X"){ // si no hay un ganador entonces es un empate
				empate();
				system("color 6f");
			}	
		}
		resetear(Triqui); // reinicia la partida
		// Triqui
		do{
			cout<<"\n\t¿Desea jugar nuevamente (0 = Si / 1 = No)?";
			cin>>desicion;
			if(desicion!="0" && desicion!="1"){
				cout<<"\n\tentrada invalida"<<endl;
			}
		}while (desicion!="0" && desicion!="1");
		if(desicion=="0"){
			system("color f1");
			system("cls");
			titulo();	
			cout<<"\n\n\t¡Bienvenido al juego del triqui!"<<endl;
			}			
	}while (desicion=="0");
	return 0;
}

