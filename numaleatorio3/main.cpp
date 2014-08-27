#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
generar dies numeros,debera de indicar el limite inferios y superios
luego debera de obtener el promedio de los pares e impares de los numeros
ingresados
*/
int main()
{
    int num,li,ls,cp,ci,sp,si,ppares,pimpares,conta;
    conta=0,cp=0,ci=0,sp=0,si=0;
    cout<<"ingresar el limite inferios";
    cin>>li;
    cout<<"ingresar limite superior";
    cin>>ls;

    while(conta<10)
       {
        conta++;
        num= li + rand()%((ls+1)-li);

    if(num%2==0)
       { cp++;
        sp+=num;}
    else
        {
        ci++;
       si+=num;
    }
}
    //calcular el promedio
    ppares= sp/cp;
    pimpares= si/ci;

    cout<<"promedio de impares es"<<pimpares<<"\n";
    cout<<"promedio de pares es"<<ppares<<"\n";



}
