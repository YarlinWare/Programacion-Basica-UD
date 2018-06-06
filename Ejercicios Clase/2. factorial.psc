Proceso factorial
	i<-1
	factor<-1
	Escribir "Ingrese numero para encontrar su factorial: "
	Leer num
	Si num<0 Entonces
		Escribir "el número ", num, " no posee factorial"
	Sino
		Si num=0 Entonces
			factor<-factor*i
		Sino
			Mientras i<=num Hacer
				factor<-factor*i
				i<-i+1
			Fin Mientras
		Fin Si
		Escribir "El factorial de ", num, " Es: ", factor
	Fin Si
FinProceso
