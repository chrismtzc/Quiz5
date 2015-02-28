#include <iostream>

using namespace std;

int main(){

  int f,c;

  cout<<"Este programa te hace una conversion de grados y te indica en que estado se encuentra el agua "<<endl;
  cout<<"Dame la temperatura en Fahrenheit: "<<endl;
  cin>>f;

  c=5*(f-32)/9;

  cout<<"La temperatura es de "<<c<<"grados celsius"<<endl;

  if(c<0){
    cout<<"El agua se encuentra congelada"<<endl;
  }
  else
  {

      if(c>99)
      {
        cout<<"El agua se encuentra en estado de gas"<<endl;
      }
    }
  


  return 0;
}
