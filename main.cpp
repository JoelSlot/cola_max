
#include<iostream>
#include"colamax.h"
#include "pila.h"



using namespace std;
int main(){
  ColaMax q;
  int i;
  for ( i=10; i>=0 ; i--)
    q.poner(i);

  while (!q.vacia() ){
    elemento x = q.frente();
    cout << x << endl;
    q.quitar();
  }

  Pila<int> p;
  p.poner(1);


  return 0;
}
