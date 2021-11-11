#include <iostream>
#include "../include/pilamax.h"

using namespace std;

int main(){
    PilaMax q;
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
    
    return 0;
    
}
