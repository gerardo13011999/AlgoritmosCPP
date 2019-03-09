#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#define TAM 15
#include <string.h>
#include <iostream>

using namespace std;

class Estudiante{
    private:
        int id, edad;
        char nombre[TAM];
        char apellido[TAM];
    public:
        Estudiante();
        Estudiante(int ID, char n[TAM], char a[TAM], int e);
        void MostrarDatos();
};

#endif // ESTUDIANTE_H_INCLUDED
