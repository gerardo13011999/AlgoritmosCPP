#ifndef TRABAJADORPORHORA_H_INCLUDED
#define TRABAJADORPORHORA_H_INCLUDED
#include "Trabajador.h"

class TrabajadorPorHora : public Trabajador {
    private:
        float sueldoPorHora;
        int numeroHorasTrab;
    public:
        TrabajadorPorHora(int i, string n, string a, int nht, float sph) {
            setId(i);
            setNombre(n);
            setApellido(a);
            this->sueldoPorHora = sph;
            this->numeroHorasTrab = nht;
        }
        int getNumeroHorasTrab() {
            return this->numeroHorasTrab;
        }
        float getSueldoPorHora() {
            return this->sueldoPorHora;
        }
        int getTipoTrabajador () {
            return 2;
        }
};

#endif // TRABAJADORPORHORA_H_INCLUDED
