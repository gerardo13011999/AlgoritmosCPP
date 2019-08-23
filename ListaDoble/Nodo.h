#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo {
    private:
        int Valor;
        Nodo *Siguiente;
        Nodo *Anterior;
    public:
        Nodo(int v, Nodo *sig = NULL, Nodo *ant = NULL) {
            this->Valor = v;
            this->Siguiente = sig;
            this->Anterior = ant;
        }
        friend class ListaDoble;
};

#endif // NODO_H_INCLUDED
