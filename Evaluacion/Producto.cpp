#include "Producto.h"

Producto::Producto(){
}
int Producto::getId(){
    return this->id;
}
string Producto::getNombre(){
    return this->nombre;
}
int Producto::getCantidad(){
    return this->cantidad;
}
float Producto::getPrecio(){
    return this->precio;
}
Fecha Producto::getFechaVencimiento(){
    return this->fechaVencimiento;
}
void Producto::setId(int _id){
    this->id = _id;
}
void Producto::setNombre(string n){
    this->nombre = n;
}
void Producto::setCantidad(int c){
    this->cantidad = c;
}
void Producto::setPrecio(float p){
    this->precio = p;
}
void Producto::setFechaVencimiento(Fecha f){
    this->fechaVencimiento = f;
}
