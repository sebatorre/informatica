#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int año, mes, dia,amd;
    cout << "ingrese el año:";
    cin >> año;
    cout << "\n";
    cout << "ingrese el mes: ";
    cin >> mes;
    cout << "\n";
    cout << "ingrese el dia: ";
    cin >> dia;
    cout << "\n";
    amd = año * 10000 + mes * 100 + dia;
    cout << "en formato AAAAMMDD seria: " << amd <<"\n";
    return 0;
}
