#include "Cliente.h"

Cliente::CLiente(){
    this->numeroProductos = 0;
}
int Cliente::getID(){
    return this->id;
}
string Cliente::getNombre(){
    return this->Nombre;
}
Producto *Cliente::getListaProductos(){
    return this->ListaProductos;
}
int Cliente::getNumeroProductos() {
    return this->numeroProductos;
}
void Cliente::setId(int _id){
    this->id = _id;
}
void Cliente::setNombre(string n){
    this->Nombre = n;
}
void Cliente::AddProductoALista(Producto p){
    this->ListaProductos[this->numeroProductos] = p;
    this->numeroProductos++;
}
