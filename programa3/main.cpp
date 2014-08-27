#include <iostream>
#include <stdlib.h>
/*ingresar a nota acumuada y examen
luego determinar nota final y la
observacion (aprobado reprobado)
*/
using namespace std;

int main()
{ int na,ne,nf;
char nombre [30];
cout<<"nombre del alumno..:";
cin.getline(nombre,30);

   cout<<"nota acumulada";
   cin>>na;

   cout<<"nota examen";
   cin>>ne;

   nf= na+ne;

   cout<<"nota final es :"<<nf<< " \n";
   if (nf>=60)
         { cout<<"aprobado";}
else
    {cout<<"reprobado";}

  cout<<"\n";

     system("PAUSE");
     }
