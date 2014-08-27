#include <iostream>

using namespace std;

int main()
{
   int num,n;
   cout<<"ingresar un numero " ;
   cin>>num;

   if (num>99999)
    cout<<"ingrese numeros dentro del rango";
   else
    n=num %10;
   num=num/10;
   cout<<n;

   if(num>0)
    n=num%10;
    num=num/10;
   cout<<n;

   if(num>0)
    n=num%10;

   cout<<n;
}

