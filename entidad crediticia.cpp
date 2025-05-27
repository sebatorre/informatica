#include <iostream>
using namespace std;

int main()
{
	int clientes, i, x, y, z,k;
	float corriente,ahorro,sumcor,sumahor;
	cout << "para cuantos clientes se usara este algoritmo?  \n";
	cin >> clientes;

	sumcor = 0;
	for ( i = 1; i <= clientes; i++)
	{
		cout << "el cliente  " << i << " cuanta plata ingresa en la cuenta corriente?\n";
		cin >> corriente;
		cout << "el cliente  " << i << " cuanta plata ingresa en la caja de ahorro?\n";
		cin >> ahorro;
		if (corriente<0)
		{
			corriente = 0;
			x = x + 1;
		}
		else
		{
			y = y + 1;
		}
		if (ahorro<0)
		{
			ahorro = 0;
			x = x + 1;
		}
		else
		{
			y = y + 1;
		}
		sumcor = corriente + sumcor;
		sumahor = ahorro + sumahor;

	}
	z = y + x;
	cout << "la cantiidad total de dinero en cuentas corrientes es de : " << sumcor << endl;
	cout << "la cantiidad total de dinero en cuentas corrientes es de : " << sumahor << endl;
	k = x * 100 / z;
	cout << "del total de transacciones, el " << k << "% fueron negativas.";
}
