#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <cstddef>
#include "Estudiante.h"

class Nodo {
    private:
        Nodo *Siguiente;
        Estudiante elemento;
    public:
        Nodo(Estudiante v, Nodo *sig=NULL) {
            this->elemento = v;
            this->Siguiente = sig;
        }
        friend class Lista;
        friend int main();
};

#endif // NODO_H_INCLUDED
