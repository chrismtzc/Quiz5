#include <iostream>
using namespace std;
int main()
{
  int nmenor, nmayor, x;

  do
  {
    cout<<"ingrese el numero menor"<<endl;
    cin>> nmenor;
    cout<<"ingrese el numero mayor"<<endl;
    cin>>nmayor;
    int suma=0;
    for(int i=nmenor; i<nmayor; i++)
    {
      suma=suma+1;
      i++;
    }
    cout<<"la suma es igual a: "<<suma<<endl;
    cout<<"Quieres salir presiona 1"<<endl;
    cin>>x;
  } while (x == 1);

  return 0;
}
