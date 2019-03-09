#include "estudiante.h"
Estudiante::Estudiante(int id, char n[TAM], char a[TAM], int edad) {
    this->id = id;
    strcpy(this->nombre, n);
    strcpy(this->apellido, a);
    this->edad = edad;
}
void Estudiante::MostrarDatos() {
    cout << "Mostrando";
}
