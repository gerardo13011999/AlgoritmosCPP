#include "estudiante.h"

Estudiante::Estudiante(int ID, char n[25], char a[25], int e){
    this->id = ID;
    strcpy(this->nombre, n);
    strcpy(this->apellido, a);
    this->edad = e;
}
void Estudiante::MostrarDatos(){
    cout << endl << "ID: " << this->id << endl << "Nombre: " << this->nombre << " " << this->apellido << endl << "Edad: " << this->edad;
}
