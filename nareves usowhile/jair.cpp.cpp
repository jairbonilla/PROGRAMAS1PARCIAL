#include <iostream>

using namespace std;

int main()
{
    int numero,promedio,cpar,cimpar,par,impar;
    int cifra,suma,sp,si;
    numero=0,suma=0,promedio=0,par=0,impar=0,cpar=0,cimpar=0,sp=0,si=0;



    cout<<"ingresar un numero";
    cin>>numero;
    while(numero>0)
        {
            cifra=numero%10;
            cout<<cifra;

        numero=numero/10;
        suma+=cifra;

        promedio=suma/cifra;
        if(numero%2==0)


            cout<<" impar ";
        else




            cout<<" par ";

        }
        cout<<"suma"<<suma<<"\n";
        cout<<"promedio"<<promedio<<"\n";
        cout<<"cpar"<<cpar<<"\n";
        cout<<"cimpar"<<cimpar<<"\n";
}
