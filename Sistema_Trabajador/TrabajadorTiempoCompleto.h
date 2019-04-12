#ifndef TRABAJADORTIEMPOCOMPLETO_H_INCLUDED
#define TRABAJADORTIEMPOCOMPLETO_H_INCLUDED
#include "Trabajador.h"

class TrabajadorTiempoCompleto : public Trabajador {
    private:
        float descuentoIsss;
        float descuentoAfp;
        float totalDescuentos;
    public:
        TrabajadorTiempoCompleto(int i, string n, string a, float s) {
            setId(i);
            setNombre(n);
            setApellido(a);
            this->descuentoIsss = s * 0.075;
            ///Tabla de AFP
            if (s >= 487.61 && s <= 642.85) {
               this->descuentoAfp = (s - 487.6) * 0.1 + 17.48;
            } else if (s >= 642.86 && s <= 915.81) {
                this->descuentoAfp = (s - 642.85) * 0.1 + 32.7;
            } else if (s >= 915.82 && s <= 2058.67) {
                this->descuentoAfp = (s - 915.81) * 0.2 + 60;
            } else if (s >= 2058.68) {
                this->descuentoAfp = (s - 2058.67) * 0.3 + 288.57;
            } else {
                this->descuentoAfp = 0;
            }
            ///Fin de tabla de AFP
            this->totalDescuentos = this->descuentoIsss + this->descuentoAfp;
        }
        float getDescuentoIsss() {
            return this->descuentoIsss;
        }
        float getDescuentoAfp() {
            return this->descuentoAfp;
        }
        float getTotalDescuentos() {
            return this->totalDescuentos;
        }
        int getTipoTrabajador () {
            return 1;
        }
};

#endif // TRABAJADORTIEMPOCOMPLETO_H_INCLUDED
