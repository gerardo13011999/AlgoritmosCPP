#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <cstddef>

class Nodo {
    private:
        Nodo *Siguiente;
        int elemento;
    public:
        Nodo(int v, Nodo *sig=NULL) {
            this->elemento = v;
            this->Siguiente = sig;
        }
        friend class Lista;
};

#endif // NODO_H_INCLUDED
