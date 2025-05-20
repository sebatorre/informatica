#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float rad, diam,area,cir;
	cout << "ingrese el radio del circulo: ";
	cin >> rad;
	diam = rad * 2;
	cir = 3.1416 * rad;
	area = cir * rad;
	cout << "el diametro es: " << diam << "\n";
	cout << "el perimetro es: " << cir << "\n";
	cout << "el area es: " << area<<"\n";
}
