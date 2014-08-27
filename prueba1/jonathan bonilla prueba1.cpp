#include <iostream>
#include <stdlib.h>
using namespace std;
/* ingresar un numero y determinar cuantas sifras tiene
 evaluar hasta 4 cifras y luego decir que tiene mas de
 4 cifras
 no tiene qque importar el valor del signo.

 <--------------------->
*/
int main()
{
    int n1;
    cout<<"ingrese un numero";
    cin>>n1;





     if ((n1>=1) && (n1<=9))

       cout<<"tiene una cifra";

      else if
      ((n1>=10) && (n1<=99))
      cout<<"tiene 2 cifras";
    else if
        ((n1>=100) && (n1<=999))
      cout<<"tiene 3 cifras";
    else if
        ((n1>=1000) && (n1<=9999999))
      cout<<"tiene 4 o mas cifras";














}
