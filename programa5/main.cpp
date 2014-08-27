#include <iostream>
#include <stdlib.h>
using namespace std;
/*ingresar el nombre del empleado y las ventas,
 luego determinar el porcentage de comicion
 usando el turno de trabajo del seguro social usando la comicion
 y el total a pagar.
 turno por comicion
 1           6%
 2           8%
 si el salario (comision) es mayor a 7000 la deduccion es de
 245 y sino es de 0.035% del salario.
 el total a pagar es el ingreso (comision) - el ihss.*/

int main()
{
    int turno;
  char nombre[30];
  double ventas,comision,ihss,tp;

  cout<<"nombre del empleado...:";
  cin.getline(nombre,30);

  cout<<"ventas...:";
  cin>>ventas;

  cout<<"turno...:";
  cin>>turno;

  if(turno==1)//cuando se compara se ponen dos iguales //
   {comision=0.06*ventas;}
   else
    { comision =0.08 *ventas;}
   if (comision>7000)
   { ihss=245;
   }
   else
    { ihss=0.035*comision;}
    tp= comision -ihss;
     cout<<"comisiones"<<comision<<"\n";
     cout<<"ihss"<<ihss<<"\n";
     cout<<"total a pagar"<<tp<<"\n";
     }


