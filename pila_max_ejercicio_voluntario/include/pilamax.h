#ifndef pilamax_h
#define pilamax_h

#include <iostream>
#include <queue>

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


class PilaMax {
  private:
    queue<elemento> cola;
    
    /**
     * @brief Almacena los elementos de una cola en otra.
     *
     * @param P1 Cola la cual dejaremos vacía y almacenaremos sus valores en la otra cola
     * @param P2 Cola la cual llenaremos con los valores que vamos eliminando de la otra cola para guardar estos
     * valores
     */
    void reverseCola(queue<elemento> &P1, queue<elemento> &P2);
    
  public:
    
    /**
     * @brief Constructor por defecto
     */
    PilaMax();
    
    /**
     * @brief Destructor
     */
    ~PilaMax();
    
    /**
     * @brief Comprueba si la pila está vacía
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
     * @brief Elimina el primero elemento de la pila
     */
    void quitar();
    
    /**
     * @brief Devuelve el primer elemento de la pila
     */
    elemento frente();

};


#endif
