Proceso CDT
	capital<-0
    interes<-0
    valor_futuro<-0
    opcion_tiempo<-0
    escribir "Capital a invertir: "
    Leer capital
    escribir "Taza de interés anual (%): "
    Leer interes
    escribir "Cantidad de Años "
    Leer anios
    escribir "Escoja según corresponda: "
    escribir "1. Mensual"
    escribir "2. Trimestral "
    escribir "3. Semestral "
    escribir "4. Anual "
    Leer opcion_tiempo	
    Segun opcion_tiempo Hacer
        1:
            //i=interés/periodo de tiempo
            i<- interes/12
            N<-anios*12
            valor_futuro<-(capital*((1+(i/100))^N))
			Escribir "Capital de inversión: ", capital
			Escribir "Taza interés anual: ", interes,"%"
			Escribir "Efectivo por periodo de tiempo: ", i,"%"
			Escribir "Valor a futuro: ", TRUNC(valor_futuro)
        2:
            i<- interes/4
            N<-anios*4
            valor_futuro<-(capital*((1+(i/100))^N))
			Escribir "Capital de inversión: ", capital
			Escribir "Taza interés anual: ", interes,"%"
			Escribir "Efectivo por periodo de tiempo: ", i,"%"
			Escribir "Valor a futuro: ", TRUNC(valor_futuro)
        3:
            i<- interes/2
            N<-anios*2
            valor_futuro<-(capital*((1+(i/100))^N))
			Escribir "Capital de inversión: ", capital
			Escribir "Taza interés anual: ", interes,"%"
			Escribir "Efectivo por periodo de tiempo: ", i,"%"
			Escribir "Valor a futuro: ", TRUNC(valor_futuro)
        4:
            i<- interes/1
            N<-anios*1
            valor_futuro<-(capital*((1+(i/100))^N))
			Escribir "Capital de inversión: ", capital
			Escribir "Taza interés anual: ", interes,"%"
			Escribir "Efectivo por periodo de tiempo: ", i,"%"
			Escribir "Valor a futuro: ", TRUNC(valor_futuro)
        De Otro Modo:
            Escribir "No se reconocio el número"			
		Fin Segun		
FinProceso
