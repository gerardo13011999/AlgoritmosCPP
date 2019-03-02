#include <iostream>

using namespace std;

#include "rusa.h"

#include <cctype>

int main()
{
    //Declaracion de variables
    int x, y, resultado, repetir = 1;

    int opcion;
    cout << "--Programa para realizar una multiplicacion--" << endl << "Autor: Douglas Gerardo Flores Flores" << endl << "Codigo: FF19-I04-001" << endl << endl;

    rusa programa;

    while (repetir == 1) {
        cout << endl << endl << "Instrucciones para el programa:" << endl << "Agregar datos(1)" << endl << "Resultado(2)" << endl << "Salir(3)" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << endl << "Ingrese el multiplicando: ";
                cin >> x;
                cout << endl << "Ingrese el multiplicador: ";
                cin >> y;
                programa.setDatos(x, y);
                break;
            case 2:
                resultado = programa.getResutado();
                cout << endl << endl << "El resultado de la multiplicacion es: " << endl << x << " * " << y << " = " << resultado;
                break;
            case 3:
                cout << endl << "Hasta pronto";
                return 0;
                break;
            default:
                cout << endl << "La opcion ingresada es incorrecta";
                break;
        }
        cout << endl << endl << "¿Desea repetir el programa? Si(1) No(0) ";
        cin >> repetir;
    }
    return 0;
}
