#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
  int numsec, contador=0, num;
  srand (time(NULL));
  numsec=rand()%100+1;
  do{
    cout<<"Adivina el numero secreto que esta entre 0 a 100"<<endl;
    cin >> num;
    if(num>numsec){
      cout<<"El numero que elegiste es mayor al secreto"<<endl;

    }
    if(num<numsec){
      cout<<"El numero que elegiste es menor al secreto"<<endl;

    }
    contador++;
  } while(numsec!=num);
  cout<<"Felicidades encontraste el numero"<<endl;
  cout<<"tu numero de intentos fue de "<<contador<<endl;
  return 0;
}
