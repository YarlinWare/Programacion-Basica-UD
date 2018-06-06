Proceso fibonacci
	n<-0
	serie<-0
	a<-1
	b<-0
	Escribir "Digite el numero de elementos: "
	Leer n
	Para i<-1 Hasta n Con Paso 1 Hacer
		serie<-a+b
		Escribir serie," "
		a<-b
		b<-serie
	Fin Para	
FinProceso
