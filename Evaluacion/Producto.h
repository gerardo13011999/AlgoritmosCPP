#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

#include <iostream>

using namespace std;

#include "Fecha.h"

class Producto {
    private:
        int id;
        string nombre;
        int cantidad;
        float precio;
        Fecha fechaVencimiento;
    public:
        Producto();
        int getId();
        string getNombre();
        int getCantidad();
        float getPrecio();
        Fecha getFechaVencimiento();
        void setId(int);
        void setNombre(string);
        void setCantidad(int);
        void setPrecio(float);
        void setFechaVencimiento(Fecha);
};

#endif // PRODUCTO_H_INCLUDED
