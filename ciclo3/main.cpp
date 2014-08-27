#include <iostream>

using namespace std;
/* ingresar cinco numeros y contar cuanto de ellos son pares
    y cuanto de ellos son impares.
*/
int main()
{
    int num,par,impar;
    int cont=0;
    par=0,impar=0;
    while (cont<5)
       {
        cout<<"ingresar numero ";
        cin>>num;

    if ((num%2)==0)
        par++;
    else
        impar++;

           cont++;
    }
        cout<<"numeros pares"<<par<<"\n";
        cout<<"numeros impares"<<impar<<"\n";
}
