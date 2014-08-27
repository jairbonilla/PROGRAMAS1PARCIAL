#include <iostream>

using namespace std;
/*ingresar 5 numeros y presentar la sumatoria al final del
ciclo utilizando wile. y contar cuantos numeros fueron mayoresa 100.
*/

int main()
{
    int numero;
    int contador,suma,contador100,prom;
    contador=0;
    suma=0;
    contador100=0;
    prom=suma/contador;

    while (contador<5)
        {
            cout<<"ingresar numero   ";
            cin>>numero;

            suma= suma+ numero;

            contador ++ ;
            if (numero>100)
                contador100++;
            cout<<"suma de los numeros es "<<suma<<"\n";
            cout<<"numeros mayores a 100 "<<contador100<<"\n";
            cout<<"promedio es "<<prom<<"\n";
        }
}

