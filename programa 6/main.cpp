#include <iostream>
#include <stdlib.h>
using namespace std;
/* ingresar nombre del alumno  examen.
calcular la nota final y ajustarla a 60 si
 nota acumulada si esta entre 57-59.
 detrminar la observacion con la siguiente tabla
  1-59 reprobado
  60-80 bueno
  81-90 muy bueno
  91-100 sobresaliente
*/
int main()
{ char nombre [30];
  int na,ex,nf;
  cout<<"nombre del alumno...:";
  cin.getline(nombre,30);

  cout<<"ingresar nota acumulada...:";
  cin>>na;
  cout<<"ingresar la nota del examen...:";
  cin>>ex;

  nf= na+ex;

  if ((nf>=57) && (nf<=60))
    nf=60;
  cout<<"nota final..."<<nf<<"\n";

  if ((nf>=1) && (nf<=60))
    cout<<"reprobada";
  else if ((nf>=60) && (nf<=80))
  cout<<"bueno";
    else if ((nf>=81) && (nf<=90))
    cout<<"muy bueno";
      else if ((nf>=91) && (nf<=100))
      cout<<"exelente";
        else
         cout<<"nota fuera del rango";


system("pause");



}
