#include <iostream>
#include <stdlib.h>
using namespace std;
/* ingresar el nombre del empleado,
las ventas el turno y luego calcular el % del
ihss y total a pagar.
turno    comision
1            5%
2            7%
3            9%
bono: este se da si la persona vendio mas de 50,000 y es de la zona 1 o 3
el bono es de 500 sino es de 150

*/
int main()
{
   char nombre[30];
   double ventas, comision,ihss,pc,tp;
   int turno,bono;
    cout<<"nombre del empleado";
    cin.getline(nombre,30);

    cout<<"ventas del mes ";
    cin>>ventas;

    cout<< "turno del empleado ";
    cin>>turno;
    if (turno==1)
     pc = 0.05;
     else if (turno==2)
        pc=0.07;
        else if (turno==3)
                  pc=0.09;
     else
        pc=0;
     comision =ventas * pc;

     if ((ventas>50000) && ((turno==1) || (turno==3)))
         bono=500;
        else
            bono=150;
     if (comision>7000)
        ihss=245;
     else
        ihss=0.035*comision;

     tp=comision + bono - ihss;

     cout<<"porcentaje de comicion"<<pc<<"\n";
         cout<<"total a pagar"<<tp<<"\n";
         cout<<"comision ganada"<<comision<<"\n";


}
