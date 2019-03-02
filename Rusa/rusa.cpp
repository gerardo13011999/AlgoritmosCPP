#include "rusa.h"

#include <iostream>

using namespace std;

rusa::rusa() {
    this->multiplicando = 0;
    this->multiplicador = 0;
    this->resultado = 0;
}
void rusa::setDatos(int x, int y) {
    this->multiplicando = x;
    this->multiplicador = y;
}
int rusa::getMultiplicando() {
    return this->multiplicando;
}
int rusa::getMultiplicador(){
    return this->multiplicador;
}
int rusa::getResutado() {
    while(this->multiplicando > 1) {
        this->multiplicando = this->multiplicando / 2;
        this->multiplicador = this->multiplicador * 2;
        if (this->multiplicando % 2 != 0) {
            this->resultado = this->resultado + this->multiplicador;
        }
    }
    return resultado;
}
