#include <iostream>
int main() {
    int SM = 0;
    int SF = 0;
    int TP = 0;
    int N;
    char SP;
	float PM, PF;
    cout << "DIME LA CANTIDAD TOTAL DE PERSONAS: ";
    cin >> N;

    while (TP < N) {
        cout << "DIME EL SEXO DE LA PERSONA SEÑALIZANDO M o F: ";
        cin >> SP;

        if (SP == 'F' || SP == 'f') {
            SF++;
        }
        if (SP == 'M' || SP == 'm') {
            SM++; 
        }

        TP++;
    }

    PM = SM * 100 / N;
    PF = SF * 100 / N;

    cout << "Porcentaje de mujeres: " << PF << "%" << "\n";
    cout << "Porcentaje de hombres: " << PM << "%" << "\n";
}
/*Algoritmo pacientes
	SM<-0
	SF<-0
	TP<-0
	Escribir "DIME LA CANTIDAD TOTAL DE PERSONAS"
	Leer   N 
	Mientras N>TP //mientras la cantidad de personas sea menor al TP (total personas) se repetira lo siguiente:
		Escribir "DIME EL SEXO DE LA PERSONA SEÑALIZANDO M o F"
		Leer SP
		si SP=F
			Entonces
			SSF<-SF+1 //SSF es la cantidad total de personas de sexo femenino agragadas ahasta el momento
		FinSi
		Si SP=M
			ENTONCES
			SSM<-SM+1 //SSM es la cantidad total de personas de sexo masculinos agragadas ahasta el momento
		FinSi
		TP<-TP+1
	FinMientras
		PM<-SSM/N*100 //saco porcentaje tanto para la cantidad de personas masculinas como femeninas
		PF<-SSF*100/N
		ESCRIBIR"porcentaje de mujeres:",PF
		Escribir"Porcentaje de hombres:",PM
	
FinAlgoritmo*/