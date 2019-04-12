#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED
#include "Persona.h"

class Trabajador : public Persona {
    private:
       float sueldoMensual;
       float descuentoIsr;
       float totalPagar;
    public:
        Trabajador(int i = 0, string n = "", string a = "") {
            setId(i);
            setNombre(n);
            setApellido(a);
        }
        float getSueldoMensual() {
            return this->sueldoMensual;
        }
        float getDescuentoIsr() {
            return this->descuentoIsr;
        }
        float getTotalPagar() {
            return this->totalPagar;
        }
        virtual int getTipoTrabajador () {
            return 0;
        }
};

#endif // TRABAJADOR_H_INCLUDED
