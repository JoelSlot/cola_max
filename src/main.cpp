
#include<iostream>
#include "../include/colamax.h"
#include "../include/pila.h"



using namespace std;
int main(){
  ColaMax q;
  int i;
  for ( i=0; i<=10 ; i++){
    if(i == 5){
      q.poner(20);
    } else {
      q.poner(i);
    }
  }
  while (!q.vacia() ){
    elemento x = q.frente();
    cout << x << endl;
    q.quitar();
  }


  //Pila<int> p;
  //p.poner(1);


  return 0;
}
