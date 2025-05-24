#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int numero, numa, numb, numc;
	cout << "escribe un numero en formato AAAAMMDD: ";
	cin >> numero;
	numa = numero / 10000;
	numa = floor(numa);
	numb = numero / 100;
	numb = floor(numb);
	numb = numb - numa * 100;
	cout << "es el año" << numa << "\n";
	if (  0> numb || numb> 12)
	{
		cout << "el numero no corresponde a un formato AAAAMMDD \n";
	}
	else
	{
		cout << "es el mes numero: " << numb << "\n";
	}
	numc = numero - numa * 10000 - numb * 100;
	if (0 > numc || numc > 31) {
		cout << "el numero no corresponde a un formato AAAAMMDD \n";		
	}
	else
	{
		cout << "es el dia: " << numc;
	}
	return 0;
}
