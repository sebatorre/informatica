#include<iostream>
int main() {
	int cantidad, E, edad,F;
	float sumaedad=0, promedad, peso, sumapeso=0 ,prompeso;
	std::cout << "cuantos estudiantes son?\n";
	std::cin >> cantidad;

	for ( E = 1; E <= cantidad; E++){
		std::cout << "edad del alumno"<< E <<": \n";
		std::cin >> edad;
		sumaedad = sumaedad + edad;
		std::cout << "peso del alumno" << E << ": \n";
		std::cin >> peso;
		sumapeso = sumapeso + peso;
	}
	promedad = sumaedad / cantidad;
	prompeso = sumapeso / cantidad;

	std::cout << "el promedio de peso es: "<< prompeso <<"\n";
	std::cout << "el promedio de edad es: "<< promedad <<"\n";

	return 0;
}
/*
Algoritmo promediosfinal
	definir cantidad Como entero
	definir suma Como Real
	Escribir "cuantos estudiantes son?"
	Leer cantidad

	Para E=1 Hasta cantidad Con Paso 1 Hacer
		Escribir"edad del alumno",E " :"
		Leer  edad
		sumaedad = sumaedad+edad
	FinPara

	PROMEDAD=sumaedad/cantidad

	Para F=1 Hasta cantidad con paso 1 Hacer
		Escribir "peso (en Kg) alumno ",F " :"
		leer peso
		sumapeso=sumapeso + peso
	FinPara

	PROMPESO=sumapeso/cantidad

	Escribir"el primedio es de edad es:" ,PROMEDAD " años"
	Escribir"el promedio de peso es:" ,PROMPESO " Kg"
FinAlgoritmo
*/