#include <iostream>
using namespace std;

int main() {
    // a. Utilizando un solo operador de inserción de flujo
    cout << "Forma a: ";
    cout << "1 2 3 4" << endl;

    // b. Una única sentencia con 4 operadores de inserción de flujo
    cout << "Forma b: ";
    cout << 1 << " " << 2 << " " << 3 << " " << 4 << endl;

    // c. Utilizando cuatro sentencias
    cout << "Forma c: ";
    cout << 1 << " ";
    cout << 2 << " ";
    cout << 3 << " ";
    cout << 4 << endl;

    return 0;
}
