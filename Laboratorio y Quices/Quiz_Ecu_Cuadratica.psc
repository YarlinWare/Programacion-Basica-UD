Proceso sin_titulo
	Escribir "Digite 3 valores para {A,B,C}, de la ecuacion cuadratica (A(X^2)+BX+C=0): ";
	Escribir "A: " 
	Leer a
	Escribir "B: "
	Leer b
	Escribir "C: "
	Leer c
	r<-(b*b)-(a*c*4);
	Si (a==0) Entonces
		Escribir "No es posible dividir entre 0\n"
		Leer b
	Sino
		Si r<0 Entonces
			r<-(r*(-1))
			q<-((b*(-1))/(2*a))
			Escribir "x1= (", q," + ",(raiz(r)/(2*a))," i",")"
			Escribir "x2= (",q," - ",(raiz(r)/(2*a))," i",")"	
		Sino
			x1<-((b*(-1))+raiz((b*b)-(4*a*c)))/(2*a);
			Escribir "x1 = ",x1
			x2<-((b*(-1))-raiz((b*b)-(4*a*c)))/(2*a);
			Escribir "x2 = ",x2
		Fin Si
	Fin Si

	Escribir "F(x)= (",a,")X^2 + (",b,")X"," + (",c,")= 0";
	
FinProceso
