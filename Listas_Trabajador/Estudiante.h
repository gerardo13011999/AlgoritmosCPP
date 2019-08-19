#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include <iostream>

using namespace std;

class Estudiante {
    private:
        int id;
        string nombre;
        string apellido;
        float Nota1;
        float Nota2;
        float Nota3;
        float promedio;
    public:
        Estudiante() {
            this->promedio = 0;
        }
        Estudiante(int i, string n, string a) {
            this->id = i;
            this->nombre = n;
            this->apellido = a;
            this->promedio = 0;
        }
        void setNotas(float n1, float n2, float n3) {
            this->Nota1 = n1;
            this->Nota2 = n2;
            this->Nota3 = n3;
            this->promedio = (n1 + n2 +n3) / 3;
        }
        int getId() {
            return this->id;
        }
        void setId(int i) {
            this->id = i;
        }
        void setNombre(string n) {
            this->nombre = n;
        }
        string getNombre() {
            return this->nombre;
        }
        string getApellido() {
            return this->apellido;
        }
        void setApellido(string a) {
            this->apellido = a;
        }
        int getPromedio() {
            return this->promedio;
        }
        friend class Lista;
};

#endif // ESTUDIANTE_H_INCLUDED
