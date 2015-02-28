#include <iostream>
using namespace std;

int suma (int x, int y){
  int suma=x+y;
  return suma;
}

int resta (int x, int y){
  int resta=x-y;
  return resta;
}
int multi (int x, int y){
  int multi=x*y;
  return multi;
}
int division (int x, int y){
  int division=x-y;
  return division;
}
int residuo (int x, int y){
  int residuo=x-y;
  return residuo;
}

int main ()
{
  int x, y;
  cout<<"Dame el primer numero: "<<endl;
  cin>>x;
  cout<<"Dame otro numero: "<<endl;
  cin>>y;

  int sum = suma (x,y);
      cout<<"La suma es: "<<sum<<endl;

  int rest = resta (x,y);
      cout<<"La resta es: "<<rest<<endl;

  int mult = multi (x,y);
      cout<<"La multiplicacion es: "<<mult<<endl;

  int divi = division (x,y);
      cout<<"La division es: "<<divi<<endl;

  int resi = residuo (x,y);
      cout<<"El residuo es: "<<resi<<endl;

  return 0;
}
