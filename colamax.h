#ifndef colamax_h
#define colamax_h

#include "pila.h"
#include <iostream>

using namespace std;

struct elemento {
  int ele; ///<elemento a almacenar
  int maximo; ///<el máximo
};

ostream& operator << (ostream &o,const elemento &p)
{
    o << "(Elemento: " << p.ele << ", maximo: " << p.maximo << ")";
    return o;
}


class ColaMax {
  private:
    Pila<elemento> pila;
    void reversePila(Pila<elemento> &P1, Pila<elemento> &P2);
  public:
    ColaMax();
    ~ColaMax();
    bool vacia();
    void poner(int newNumber);
    void quitar();
    elemento frente();

};


#endif
