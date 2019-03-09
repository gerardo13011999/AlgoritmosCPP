#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#define TAM 25
#include <string.h>
#include <iostream>
using namespace std;

class Estudiante{
    private:
        int id, edad;
        char nombre[TAM];
        char apellido[TAM];
    public:
        Estudiante(int id, char n[TAM], char a[TAM], int edad);
        void MostrarDatos();
};

#endif // ESTUDIANTE_H_INCLUDED
