#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
 int dd,mm,aa;

    cout<<"ingresar dia...";
    cin>>dd;
    cout<<"ingresar mes...";
    cin>>mm;
    cout<<"ingresar año...";
    cin>>aa;


    if ((mm=2) && (dd>=29)|| (mm=4) && (dd>30) || (mm=6) && (dd>30) || (mm=9) && (dd>30) || (mm=11) && (dd>30))
    cout<<"fecha incorrecta";
  else  if ((dd<=31)&& (mm==1) || (mm=3) && (dd<=31)  ||(mm=5) && (dd<=31) ||
        (mm=7) && (dd<=31)||   (mm=8) && (dd<=31) ||
        (mm=10) && (dd<=31) ||  (mm=12) && (dd<=31)  )
       cout<<"fecha correcta";

}
