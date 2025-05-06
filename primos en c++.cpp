#include <iostream>
int main()
{  
    int num, cantidad, E, R;
    int D; 

    std::cout<<"cuantos numeros componen tu lista?\n"
    std::cin >> cantidad;

    for ( E=1; E <= cantidad; E++ ){   
        D = 0;
        std::cout<<"el "<< E << "° numero de tu lista:";
        std::cin >> num;
        for (R = 1; R <= num; R++){
            if ( num % R == 0){

                D = D + 1;

            }
            if ( D == 2 ){

                std::cout<<"el numero es primo";

            } 
            if ( D != 2 ){

                std::cout<<"el numero no es primo";

            }  
        }
    }
    return 0;
}
/*
Algoritmo primo
	escribir "cuantos numeros componen tu lista"
	Leer cantidad
	Para E=1 Hasta cantidad Con Paso 1 Hacer 
		Escribir"el ",E "° numero de tu lista:"
		Leer  num 
		D<-0 
		Para R=1 hasta num Con Paso 1  hacer
			si num mod R=0 
				D <-D+1
			FinSi
		FinPara
		si D=2 Entonces 
			Escribir "el numero es primo"
		SiNo
			Escribir "el numero no es primo"
		FinSi
	FinPara
FinAlgoritmo

*/