#ifndef LISTADOBLE_H_INCLUDED
#define LISTADOBLE_H_INCLUDED
#include "Nodo.h"
#include <iostream>

using namespace std;

class ListaDoble {
    private:
        Nodo *elemento;
        bool ListaVacia() {
            return (this->elemento == NULL);
        }
        void Inicio() {
            if (!ListaVacia()) {
                while(this->elemento->Anterior) {
                    this->elemento = this->elemento->Anterior;
                }
            }
        }
        void Final() {
            if (!ListaVacia()) {
                 while(this->elemento->Siguiente) {
                    this->elemento = this->elemento->Siguiente;
                }
            }
        }
    public:
        ListaDoble() {
            this->elemento = NULL;
        }
        ~ListaDoble() {
            this->Inicio();
            while (this->elemento){
                Nodo *aux = this->elemento;
                this->elemento = this->elemento->Siguiente;
                delete aux;
            }
        }
        void Insertar(int v) {
            Nodo *nuevo = new Nodo(v);
            this->Final();
            if (this->ListaVacia()) {
                this->elemento = nuevo;
            } else {
                this->elemento->Siguiente = nuevo;
                nuevo->Anterior = this->elemento;
            }
            this->elemento = nuevo;
        }
        Nodo *Buscar(int v) {
            this->Inicio();
            Nodo *r = NULL;
            bool encontrado = false;
            Nodo *tmp = this->elemento;
            while(tmp && !encontrado) {
                if (v == tmp->Valor) {
                    encontrado = true;
                    r = tmp;
                }
                tmp = tmp->Siguiente;
            }
            return r;
        }
        void Modificar(int v, int n) {
            Nodo *pos = Buscar(v);
            if (pos != NULL) {
                pos->Valor = n;
                Nodo *ant = pos->Anterior;
                if (ant == NULL) {
                    this->elemento = pos;
                } else {
                    ant->Siguiente = pos;
                    this->elemento = ant;
                }
            } else {
                cout << "No existe el valor a modificar\n";
            }
        }
        void Eliminar(int v) {
            Nodo *pos = Buscar(v);
            if (pos != NULL) {
                Nodo *ant = pos->Anterior;
                if (ant == NULL) {
                    ///Primer nodo
                    this->elemento = this->elemento->Siguiente;
                    this->elemento->Anterior = NULL;
                } else if (pos->Siguiente == NULL) {
                    ///Ultimo nodo
                    this->elemento = pos->Anterior;
                    this->elemento->Siguiente = NULL;
                } else {
                    ///Nodo de enmedio
                    this->elemento = pos->Anterior;
                    this->elemento->Siguiente = pos->Siguiente;
                }
            } else {
               cout << "No existe el valor a eliminar\n";
            }
        }
        void Mostrar(int o) {
            Nodo *tmp;
            if (o == 1) {
                ///Ascendente
                this->Inicio();
                tmp = this->elemento;
                while(tmp) {
                    cout << tmp->Valor << "<-->";
                    tmp = tmp->Siguiente;
                }
            } else {
                ///Descendente
                this->Final();
                tmp = this->elemento;
                while(tmp) {
                    cout << tmp->Valor << "<-->";
                    tmp = tmp->Anterior;
                }
            }
            cout << "NULL\n";
        }
};

#endif // LISTADOBLE_H_INCLUDED
