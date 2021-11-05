#include "colamax.h"
#include "pila.h"

ColaMax::ColaMax(){
  
}

ColaMax::~ColaMax(){
  while(!this->pila.vacia()){
    this->pila.quitar();
  }
}

void ColaMax::reversePila(Pila<elemento> &P1, Pila<elemento> &P2){
  while(!P1.vacia()){
    P2.poner(P1.tope());
    P1.quitar();
  }
}

void ColaMax::poner(int newNumber){
  Pila<elemento> aux;
  this->reversePila(this->pila, aux);
  elemento elemento;
  elemento.ele = newNumber;

  if(!aux.vacia()){
    if(newNumber > aux.tope().maximo){
      elemento.maximo = newNumber;
    }
  } else {
    elemento.maximo = aux.tope().maximo;
  }

  aux.poner(elemento);
  this->reversePila(aux, this->pila);

}

void ColaMax::quitar(){
  pila.quitar();
}

elemento ColaMax::frente(){
  return pila.tope();
}

bool ColaMax::vacia(){
  return pila.vacia();
}
