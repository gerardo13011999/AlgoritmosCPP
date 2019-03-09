#include "materia.h"

Materia::Materia(int ID, char nombre[20], char profe[20]){
    this->id = ID;
    strcpy(this->nombreMateria, nombre);
    strcpy(this->profesor, profe);
}
void Materia::setLista(Estudiante *est){
    this->IstEstudiante = e;
}
