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
        void Insertar(int v) {
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
            int contador = 1;
            while(tmp && !encontrado) {
                if(v == contador) {
                    encontrado = true;
                    retorno = tmp;
                } else {
                    tmp = tmp->Siguiente;
                }
                contador++;
            }
            return retorno;
        }
        void Modificar(int v, int n) {
            ///Obtener nodo y cambiar el valor
            Nodo *pos = Buscar(v);
            Nodo *prev = Buscar(v - 1);
            Nodo *next = Buscar(v + 1);
            pos->elemento = n;
            pos->Siguiente = next;
            prev->Siguiente = pos;
            this->Ultimo = prev;
        }
        void Eliminar(int v) {
            Nodo *prev = Buscar(v - 1);
            Nodo *next = Buscar(v + 1);
            prev->Siguiente = next;
            this->Ultimo = prev;
        }
        void Mostrar() {
            Nodo *tmp = this->Primero;
            while(tmp) {
                cout << tmp->elemento << "-->";
                tmp = tmp->Siguiente;
            }
            cout << "NULL\n";
        }
};

#endif // LISTA_H_INCLUDED
