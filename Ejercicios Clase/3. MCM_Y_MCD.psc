Proceso MetodoEuclides
	A<-0
	B<-0
	cociente<-0
	resto<- 0
	Escribir "Ingrese un primer número entero"
	Leer A
	Escribir "Ingrese un segundo número entero"
	Leer B
	AA<-A
	BB<-B
	Si A>=B Entonces
		Repetir
			cociente<-A/B
			resto<-A%B
			A<-B
			B<-resto
		Hasta Que resto=0
		Escribir "MCD es:", A
		MCM<-(AA*BB)/A
		Escribir "MCM es:", MCM
		Sino
			Repetir
				cociente<-B/A
				resto<-B%A
				B<-A
				A<-resto
			Hasta Que resto=0
			Escribir "MCD es:", B
			MCM<-(BB*AA)/B
			Escribir "MCM es:", MCM	
		Fin Si
FinProceso
