#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
generar 10 num aleatorios.

*/
using namespace std;

int main()
{
    int num;
    int cont=0;
    int mayor;
    mayor=0;
    srand(time(0)); //genera una nueva semilla
    while (cont<10)
        {
        cout<<"numeros aleatorios"<<"\n";
        num=1+rand()%(101-1);
        cout<<num<<"\n";
        cont++;
        if (num>mayor)
            mayor=num;
    }
    cout<<"numero mayor es"<<mayor<<"\n";
}
