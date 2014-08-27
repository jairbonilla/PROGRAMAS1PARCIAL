#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*generar 10 num aleatorios.
entre 200 y 500 y determinar cuantos son divisibles entre 5. el num mayor y menor
*/
int main()
{       int num,cd5;
        int cont=0;
        int mayor;
        int menor;
        srand(time(0));
        mayor=0;
        menor=500;
        cd5=0;
        cout<<"numeros aleatorios";
    while(cont<10)

{
    num= 200 + rand()%(501-200);
    if (num%5==0)
        {

        cd5++;
        }
        if(num>mayor)
            {
        mayor=num;
}
    if(num<menor)
       {
        menor=num;
}
    cout<<cd5<<"numero mayor"<<num<<"\n";

     cont++;
}
    cout<<"numero divisible entre 5"<<cd5<<"\n";
    cout<<"menor"<<menor<<"\n";
    cout<<"mayor"<<mayor<<"\n";

}
