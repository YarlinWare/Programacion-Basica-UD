Proceso Validación 
	i<-0
	n<-0
	num<-0
	pos<-0
	neg<-0
	zero<-0
	Escribir "Digite la cantidad de numeros enteros a analizar: "
	Leer n
	Mientras i<n Hacer
		Escribir "Ingrese número: "
		Leer num
		Si num=0 Entonces
			Escribir "Número e igual a cero"
			zero <- zero+1			
		Sino
			Si num<0 Entonces
				Escribir "Número negativo"
				neg <- neg+1
			Sino
				Escribir "Número positivo"
				pos <- pos+1
			Fin Si
		Fin Si
		i <- i+1
	Fin Mientras
	Escribir "Cant. # Negativos: ", neg
	Escribir "Cant. # Positivos: ", pos	
	Escribir "Cant. # Ceros: ", zero
FinProceso
