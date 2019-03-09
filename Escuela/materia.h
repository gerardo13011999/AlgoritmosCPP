#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED
#define TAM 25
#include <string.h>
#include <iostream>
using namespace std;
#include "estudiante.h"

class Materia{
    private:
        int id;
        char nombreMateria[TAM];
        char profesor[TAM];
        Estudiante IstEstudiante;
    public:
        Materia(int id, char nombre[TAM], char profesor[TAM]);
        void setListaEstudiante(Estudiante est);
        Estudiante getLista();
        void MostrarInfo();
};

#endif // MATERIA_H_INCLUDED
