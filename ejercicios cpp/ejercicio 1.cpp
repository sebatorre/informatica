#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b;
	cout << "ingrese un numero :";
	cin >> a;
	cout << "\n";
	cout << "ingrese otro numero :";
	cin >> b;
	cout << "suma: " << a + b << "\n";
	cout << "resta: " << a- b << "\n";
	cout << "resta cambiando el orde de los factores: " << b - a << "\n";
	cout << "producto: " << a * b << "\n";
	cout << "cociente : " << a / b << "\n";
	cout << "cociente cambiando el orden de factores: " << b/a << "\n";
}
