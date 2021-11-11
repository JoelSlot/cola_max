#ifndef colamax_h
#define colamax_h

#include "pila.h"
#include <iostream>

using namespace std;

struct elemento {
  int ele; ///<elemento a almacenar
  int maximo; ///<el máximo
};

inline ostream& operator << (ostream &o,const elemento &p)
{
    o << "(Elemento: " << p.ele << ", maximo: " << p.maximo << ")";
    return o;
}


class ColaMax {
  private:
    Pila<elemento> pila;
    
    /**
     * @brief Almacena los elementos de una pila en orden inverso en otra.
     *
     * @param P1 Pila la cual dejaremos vacía y almacenaremos sus valores a la inversa en la otra lista
     * @param P2 Pila la cual llenaremos con los valores que vamos eliminando de la otra pila para guardar estos
     * valores en su orden inverso
     */
    void reversePila(Pila<elemento> &P1, Pila<elemento> &P2);
    
  public:
    
    /**
     * @brief Constructor por defecto
     */
    ColaMax();
    
    /**
     * @brief Destructor
     */
    ~ColaMax();
    
    /**
     * @brief Comprueba si la cola está vacía
     */
    bool vacia();
    
    /**
     * @brief Añade un nuevo elemento a la pila con el nuevo valor que se pasa por parametro y actualiza el elemento maximo en este
     *
     * @param newNumber Es el nuevo numero que se quiere añadir a la pila
     * @post Un nuevo struct elemento con el nuevo valor int y el maximo nuevo (si este cambia) se guardaran en la pila
     */
    void poner(int newNumber);
    
    /**
     * @brief Elimina el primero elemento de la cola
     */
    void quitar();
    
    /**
     * @brief Devuelve el primer elemento de la cola
     */
    elemento frente();

};


#endif
