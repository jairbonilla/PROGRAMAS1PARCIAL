#include <iostream>

using namespace std;
/*ingresar nota acumulada y examen de alumno calcular la
nota final. luego si esta aprobado o reprobado
luego de utilizar el ciclo presentar cuantos aprobados y reprobados hay
hacerlo para 5 alumnos
*/
int main()
{

    int notaa,notae,notaf,aprobado,reprobado;
    int contador=0,cap=0,crep=0;


    while(contador<5){
        cout<<"nota acumulada";
        cin>>notaa;
        cout<<"nota examen";
        cin>>notae;
        notaf=notaa + notaf;

        if (notaf>=60)
        cap++;
        cout<<"aprobado";
        else
        crep++;
            cout<<"reprobado";

             contador++;
         }
         cout<<"aprobado"<<cap<<"\n";
        cout<<"reprobado"<<crep<<"\n";

}
