#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <iostream>

using namespace std;

#include "Producto.h"

class Cliente {
    private:
        int id;
        string Nombre;
        Producto ListaProductos[5];
        int numeroProductos;
    public:
        CLiente();
        int getID();
        string getNombre();
        Producto *getListaProductos();
        int getNumeroProductos();
        void setId(int);
        void setNombre(string);
        void AddProductoALista(Producto);
};

#endif // CLIENTE_H_INCLUDED
