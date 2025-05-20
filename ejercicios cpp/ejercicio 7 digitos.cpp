#include<iostream>
#include<cmath>
int main() {
	using namespace std;
	float num, diga, digb, digc, digd, dige;
	cout << "ingrese un numro de 5 digitos   :  ";
	cin >> num;
	diga = num / 10000;
	diga = floor(diga);
	cout << "el primer digito es: " << diga << "\n";
	digb = num / 1000;
	digb = floor(digb);
	digb = digb - diga* 10;
	cout << "el segundo digito es: " << digb<<"\n";
	digc = num / 100;
	digc = floor(digc);
	digc = digc - diga * 100 - digb * 10;
	cout << "el tercer digito es: " << digc<<"\n";
	digd = num / 10;
	digd = floor(digd);
	digd = digd - digc * 10 - digb * 100 - diga * 1000;
	cout << "el cuarto digito es: " <<digd << "\n";
	dige = num;
	dige = dige - digd * 10 - digc * 100 - digb * 1000 - diga * 10000;
	cout << "el quinto digito es: " << dige << "\n";
}
