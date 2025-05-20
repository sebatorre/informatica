#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num, año, mes,dia;
	cout << "ingrese un numero de 8 cifras con formato AAAAMMDD: ";
	cin >> num;
	if (num % 1 == 0)
	{
		año = num / 10000;
		año = floor(año);
		
		mes = num / 100;
		mes = floor(mes);
		mes = mes - año * 10000;

		dia = num - mes - año;
		
		cout << "el año es : " << año << "\n";
		cout << "el mes es : " << mes << "\n";
		cout << "el dia es : " << dia<<"\n";
	}
}
