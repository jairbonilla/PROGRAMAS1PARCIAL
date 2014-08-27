#include <iostream>
#include <stdlib.h>

using namespace std;
/*
ingresar las horas trabajadas y el pago por hora del empleado
luego determinar su pago de horas, la deduccion del rap que
es el 1.5% del ingreso, presentar el total a pagar.
*/
int main()
{ int horas,pagoporhora,pagohoras,rap,totalp;
  cout<<"ingresar las horas trabajadas...";
  cin>>pagohoras;
  cout<<"ingresar el pago por hora...:";
  cin>>pagoporhora;

  pagohoras = pagoporhora * pagohoras;
  rap= pagohoras* 0.015;
  totalp= pagohoras - rap;
  cout<<"pago horas..."<<pagohoras<<"\n";
  cout<<"deduccion del rap"<<rap<<"\n";
  cout<<"total a pagar"<<totalp<<"\n";

  system("pause");
}
