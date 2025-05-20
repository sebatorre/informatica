#include <iostream>

int main()
{
	float ladoA, ladoB,perimetro,area ;
	std::cout << "introduce la distancia del lado mas largo del rectangulo\n";
	std::cin >> ladoA;
	std::cout << "introduce la distancia del lado mas corto del rectangulo \n";
	std::cin >> ladoB;
	perimetro = 2 * ladoA + 2 * ladoB;
	area = ladoA * ladoB;
	std::cout<<"el perimetro del rectangulo es : " << perimetro<<"\n";
	std::cout << "el area del rectangulo es : " << area << "\n";
}
/*
Algoritmo rectangulo area Perimetro
	Escribir "introduce el número de uno de los lados de tu rectangulo"
	leer L1
	Escribir "introduce el número del otro lado de tu rectangulo"
	leer L2
	Perimetro=2*L1+2*L2
	Area=L1*L2
	Escribir "El perimetro de tu rectangulo es : ",Perimetro
	Escribir "El area de tu rectángulo es: ",Area
FinAlgoritmo
*/