#include "../include/pilamax.h"
#include <queue>

PilaMax::PilaMax(){

}

PilaMax::~PilaMax(){
  while(!this->cola.empty()){
    this->cola.pop();
  }
}

void PilaMax::reverseCola(queue<elemento> &P1, queue<elemento> &P2){
  while(!P1.empty()){
    P2.push(P1.front());
    P1.pop();
  }
}

void PilaMax::poner(int newNumber){
  queue<elemento> aux;
  this->reverseCola(this->cola, aux);
  elemento elemento;
  elemento.ele = newNumber;

  if(!aux.empty()){
    if(newNumber > aux.front().maximo){
      elemento.maximo = newNumber;
    }
    else{
      elemento.maximo = aux.front().maximo;
    }
  } else {
    elemento.maximo = elemento.ele;
  }

  this->cola.push(elemento);
  this->reverseCola(aux, this->cola);

}

void PilaMax::quitar(){
  cola.pop();
}

elemento PilaMax::frente(){
  return cola.front();
}

bool PilaMax::vacia(){
  return cola.empty();
}
