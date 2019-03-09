#include "Trabajador.h"

Trabajador::Trabajador(int codigo, char nombre[TAM], float sueldo) {
    this->codigoTrabajador = codigo;
    strcpy(this->nombreTrabajador, nombre);
    this->sueldoMensual = sueldo;
    this->descuentoIsss = (this->sueldoMensual*0.075);
    this->descuentoAfp = (this->sueldoMensual * 0.0725);
    this->descuentoIsr = (this->sueldoMensual * 0.1);
    this->totaPagar = this->sueldoMensual - this->descuentoIsss - this->descuentoAfp - this->descuentoIsr;
}

int Trabajador::getCodigoTrabajador() {
    return this->codigoTrabajador;
}

void Trabajador::mostrarNombreTrabajador(){
    cout << "Nombre: " << this->nombreTrabajador;
}

float Trabajador::getSueldoMensual(){
    return this->sueldoMensual;
}

float Trabajador::getDescuentoIsss(){
    return this->descuentoIsss;
}

float Trabajador::getDescuentoAfp() {
    return this->descuentoAfp;
}

float Trabajador::getDescuentoIsr() {
    return this->descuentoIsr;
}

float Trabajador::getTotalPagar() {
    return this->totaPagar;
}
