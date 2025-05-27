#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, mayor, menor,promedio,suma,producto;
    cout << "Este programa ingresara tres numeros por parte del usuario e informara la suma, el promedio, el producto, el mayor y el menor.\n";
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    suma = num1 + num2 + num3;
    promedio = suma / 3;
    producto = num1 * num2 * num3;
    mayor = num1;
    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;
    menor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    cout << "\nResultados:\n";
    cout << "Suma: " << suma <<"\n";
    cout << "Promedio: " << promedio << "\n";
    cout << "Producto: " << producto << "\n";
    cout << "Mayor: " << mayor << "\n";
    cout << "Menor: " << menor << "\n";
    return 0;
}
