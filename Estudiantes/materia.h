#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#define TAM 15
#include <string.h>
#include <iostream>

using namespace std;

#include "estudiante.h"

class Materia {
    private:
        int id;
        char nombreMateria[TAM];
        char profesor[TAM];
        Estudiante IstEstudiante;
    public:
        Materia();
        Materia(int ID, char nombre[20], char profe[20]);
        void setLista(Estudiante *est);
        Estudiante getLista();
        void MostrarInfo();
};

#endif // MATERIA_H_INCLUDED
