Proceso Serie_Euler
	x<-1
	i<-1
	factorial_n<-1
	serie<-0
	Escribir "Ingrese n: "
	Leer n
	
	Para i<-0 Hasta n Con Paso 1 Hacer
		Si i=0 Entonces
			factorial_n<-1
		SiNo
			factorial_n<-factorial_n*i
		Fin Si		
		//serie<-serie+((x^i)/factorial_n)
		serie<-serie+(1/factorial_n)
		Escribir serie
	Fin Para	
	//Escribir serie	
FinProceso
