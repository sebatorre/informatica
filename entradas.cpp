#include<iostream>
using namespace std;

int main() {
  int personas, niños,adultos,adolescentes,nenes,menores;
  float standar=1500,less5,less18,less12,importeadultos,importeniños,importenenes,importeadolescentes;
  less5=standar*0.6;
  less12=standar*0.7;
  less18=standar*0.85;
  cout<<"Ingrese la cantidad de personas: ";
  cin>>personas;
  cout<<"cuantos menores de edad hay";
  cin>>menores;
  adultos=personas-menores;
  importeadultos=adultos*standar;
  if(menores>0){
      cout<<"de los menores de edad cuantos tienen menos de 5 años?";
      cin>>niños;
      cout<<"de los menores de edad cuantos tienen menos de 12 años?";
      cin>>nenes; 
      cout<<"de los menores de edad cuantos tienen menos de 18 años?";
      cin>>adolescentes;
      importeniños=less5*niños;
      importenenes=less12*nenes;
      importeadolescentes=less18*adolescentes;
      cout<<"IMPORTES";
      cout<<"adultos: "<<importeadultos<<"\n";
      cout<<"niños: "<<importeniños<<"\n";
      cout<<"nenes: "<<importenenes<<"\n";
      cout<<"adolescentes: "<<importeadolescentes<<"\n";
      cout<<"TOTAL: "<<importeadultos+importeniños+importenenes+importeadolescentes<<"\n";
      cout<<"gracias por su compra";
  }
}
