#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <cstddef>
#include "Nodo.h"
#include <iostream>

using namespace std;

class Lista {
    private:
        Nodo *Primero;
        Nodo *Ultimo;
        bool ListaVacia() {
            return (this->Primero == NULL);
        }
    public:
        Lista() {
            this->Primero = NULL;
            this->Ultimo = NULL;
        }
        void Insertar(Estudiante v) {
            Nodo *nuevo = new Nodo(v);
            if (this->ListaVacia()) {
                this->Primero = nuevo;
            } else {
                this->Ultimo->Siguiente = nuevo;
            }
            this->Ultimo = nuevo;
        }
        Nodo *Buscar(int v) {
            Nodo *tmp = this->Primero;
            Nodo *retorno = NULL;
            bool encontrado = false;
            while(tmp && !encontrado) {
                if(tmp->elemento.getId() == v) {
                    encontrado = true;
                    retorno = tmp;
                } else {
                    tmp = tmp->Siguiente;
                }
            }
            return retorno;
        }
        void Modificar(int v, int n) {
            ///Obtener nodo y cambiar el valor
            Nodo *tmp = this->Primero;
            Nodo *pos = Buscar(v);
            if (pos != NULL) {
                Nodo *prev = NULL;
                pos->elemento.setId(n);
                while(tmp) {
                    if (tmp->elemento.getId() == v) {
                        ///Aqui modificar
                        prev->Siguiente = pos;
                    }
                    prev = tmp;
                    tmp = tmp->Siguiente;
                }
            } else {
                cout << "\nNo existe el elemento en la lista\n\n";
            }
        }
        void Eliminar(int v) {
            bool encontrado = false;
            Nodo *tmp = this->Primero;
            Nodo *anterior = NULL;
            Nodo *r = NULL;
            while (tmp && !encontrado){
                if (tmp->elemento.getId() == v){
                    encontrado = true;
                    r = tmp;
                } else {
                    anterior = tmp;
                    tmp = tmp->Siguiente;
                }
            }
            if (r){
                if (r == this->Primero){
                    this->Primero = this->Primero->Siguiente;
                } else {
                    if (r == this->Ultimo){
                        anterior->Siguiente = NULL;
                        this->Ultimo = anterior;
                    } else {
                        anterior->Siguiente = r->Siguiente;
                    }
                }
                delete r;
            } else {
                cout<<"\nNo existe el elemento en la lista\n\n";
            }
        }
        void Mostrar() {
            Nodo *tmp = this->Primero;
            if (this->ListaVacia()) {
                cout << "\n\nLa lista esta vacia\n\n";
            } else {
                cout << "\n\nID\tNombre\tApellido\tPromedio\n";
                while(tmp) {
                    cout << tmp->elemento.getId() << "\t";
                    cout << tmp->elemento.getNombre() << "\t";
                    cout << tmp->elemento.getApellido() << "\t\t";
                    cout << tmp->elemento.getPromedio() << "\n";
                    tmp = tmp->Siguiente;
                }
                cout << "\n";
            }
        }
        ~Lista() {
            this->Ultimo = NULL;
            while(this->Primero) {

            }
        }
};

#endif // LISTA_H_INCLUDED
