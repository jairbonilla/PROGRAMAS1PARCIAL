#include <iostream>

using namespace std;
/* se ingresa el nombre del aspirante, la edad, experiencia
 y si tiene titulo(1.0)
luego se imprime si esta contratado o no lo esta.
si la edad esta entre 22-27 y tiene titulo se contrata o si tiene 15 años
de experiencia.
*/
int main()
{ int titulo,experiencia,edad;
 char nombre [30];
  cout<<"ingresar el nombre del aspirante  ";
  cin.getline(nombre,30);
  cout<<"tiene titulo  ";
  cin>>titulo;
  cout<<"edad  ";
  cin>>edad;
  if ((((edad>1) && (edad<=27)) && (titulo==1)) || (experiencia>15))
   cout<<"contratado";
   else
    cout<<"vuelva a intentarlo no esta contratado";
}
