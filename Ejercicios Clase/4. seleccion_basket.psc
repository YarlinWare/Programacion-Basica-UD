Proceso SeleccionBasket
	i<-0
	definir codigo,edad, cant_aprobados, cant_presentados como entero
	definir peso, estatura, promedio como real
	definir nombre,programa, aprobados como caracter
	
	Mientras i=0 Hacer
		Borrar Pantalla
		Escribir "Codigo: "
		Leer codigo
		Escribir "Nombre: "
		Leer nombre
		Escribir "Programa: "
		Leer programa
		Escribir "Edad: "
		Leer edad
		Escribir "Peso: "
		Leer peso
		Escribir "Estatura: "
		Leer estatura
		Escribir "Promedio: "
		Leer promedio
		Borrar Pantalla
		Si (edad<=18 && peso<=60) && (estatura >= 1.80 && promedio>= 4.5 ) Entonces
			cant_aprobados<- cant_aprobados+1
			aprobados <- aprobados+" Codigo: "+ConvertirATexto(codigo)+" /Nombre: "+nombre+" /Programa: "+programa+" /Edad: "+ConvertirATexto(edad)+" /Peso: "+ConvertirATexto(peso)+" /Estatura: "+ConvertirATexto(estatura)+" /Promedio: "+ConvertirATexto(promedio)+"***---***"
			Sino
			reprobados<-reprobados+1
		Fin Si
		cant_presentados<-cant_presentados+1		
		Escribir "¿Desea inscribir otra persona (0.Si o 1.no)?: "
		Leer i
	Fin Mientras
	Borrar Pantalla
	Escribir "Aprobados: ", cant_aprobados
	Escribir aprobados
FinProceso
