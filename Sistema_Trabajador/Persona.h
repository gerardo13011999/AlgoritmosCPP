#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <iostream>

using namespace std;

class Persona {
    private:
        int id;
        string Nombre;
        string Apellido;
    public:
        Persona(int i = 0, string n = "", string a = "") {
            this->id = i;
            this->Nombre = n;
            this->Apellido = a;
        }
        void setId(int i) {
            this->id = i;
        }
        int getId() {
            return this->id;
        }
        void setNombre(string n) {
            this->Nombre = n;
        }
        string getNombre() {
            return this->Nombre;
        }
        void setApellido(string a) {
            this->Apellido = a;
        }
        string getApellido() {
            return this->Apellido;
        }
        virtual int getTipoPersona() {
            return 0;
        }
};

#endif // PERSONA_H_INCLUDED
