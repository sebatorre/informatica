#include <iostream>
using namespace std;

int main() {
  int id = 0, cat = 0;
  float suma1 = 0, suma2 = 0, suma3 = 0;
  float categorias[4] = {0, 1000, 1500, 2000};

  while (true) {
    cout << "Ingrese el ID del empleado (0 para finalizar): ";
    cin >> id;

    if (id == 0) {
      break;
    }

    cout << "Ingrese la categoría del empleado (1 a 3): ";
    cin >> cat;

    if (cat == 1) {
      suma1 += categorias[1];
    } else if (cat == 2) {
      suma2 += categorias[2];
    } else if (cat == 3) {
      suma3 += categorias[3];
    } else {
      cout << "Categoría inválida.\n";
    }
  }

  cout << "La suma de la categoría 1 es: $" << suma1 << "\n";
  cout << "La suma de la categoría 2 es: $" << suma2 << "\n";
  cout << "La suma de la categoría 3 es: $" << suma3 << "\n";

  float total = suma1 + suma2 + suma3;
  cout << "El total es de: $" << total << "\n";

  cout << "La categoría 1 tiene " << suma1 / 1000 << " empleados\n";
  cout << "La categoría 2 tiene " << suma2 / 1500 << " empleados\n";
  cout << "La categoría 3 tiene " << suma3 / 2000 << " empleados\n";

  cout << "El total de empleados es de: "
       << (suma1 / 1000 + suma2 / 1500 + suma3 / 2000) << "\n";

  return 0;
}
