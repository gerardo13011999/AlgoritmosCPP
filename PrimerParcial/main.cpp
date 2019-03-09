#include <iostream>

using namespace std;

#include "Trabajador.h"

int main()
{
    //Crear las variables
    Trabajador *empleados[10];
    int bandera = 1, opcion, contador = 0, codigo, seleccion;
    char nombre[TAM];
    float salario, isss, afp, isr, total;

    //Presentacion
    cout << "--Bienvenido al programa de administracion de trabajadores--" << endl;
    cout << "Autor: Douglas Gerardo Flores Flores";

    while(bandera == 1) {
        //Mostrar Menu
        cout << endl << endl << "Menu de opciones" << endl << "Agregar trabajador a la lista (1)" << endl << "Buscar y mostrar datos del trabajador (2)" << endl << "Mostrar lista (3)" << endl << "Salir (4)" << endl;
        cout << "Seleccione una de las opciones anteriores: ";
        cin >> opcion;

        //Ejecucion del menu
        switch (opcion) {
            case 1:
                //Validar el numero de trabajadores
                if (contador < 10) {
                    //Pedir los datosempleados[contador]->getCodigoTrabajador();
                    cout << endl << endl << "Ingrese los datos del trabajador";
                    cout << endl << "Ingrese el codigo de trabajador: ";
                    cin >> codigo;
                    cout << "Ingrese el nombre del trabajador: ";
                    cin >> nombre;
                    cout << "Ingrese el salario del trabajador: ";
                    cin >> salario;
                    //Agregar al areglo
                    empleados[contador] = new Trabajador(codigo, nombre, salario);
                    cout << "Trabajador agregado de forma exitosa";
                    //Sumar un trabajador
                    contador++;
                } else {
                    //Advertencia en caso de que se llene el areglo
                    cout << endl << endl << "La lista de trabajadores, ya esta llena";
                }
                break;
            case 2:
                cout << endl << endl << "Elija un trabajador. Tenga en cuenta que comienza a contar desde 0" << endl;
                //Recorrer los trabajadores
                //Verificar que haya al menos un empleado
                if (contador > 0) {
                    for (int i = 0; i < contador; i++) {
                        cout << i << ".";
                        empleados[i]->mostrarNombreTrabajador();
                    }
                    cout << endl << "Seleccione el trabajador: ";
                    //Pedir el seleccionado
                    cin >> seleccion;
                    //Validar si existe el trabajador
                    if (seleccion >= 0 && seleccion <= contador) {
                        cout << endl << "Los datos seleccionados son: " << endl << endl;
                        //Traer los datos del objeto
                        codigo = empleados[seleccion]->getCodigoTrabajador();
                        salario = empleados[seleccion]->getSueldoMensual();
                        isss = empleados[seleccion]->getDescuentoIsss();
                        afp = empleados[seleccion]->getDescuentoAfp();
                        isr = empleados[seleccion]->getDescuentoIsr();
                        total = empleados[seleccion]->getTotalPagar();
                        //Imprimir los datos
                        cout << "Datos del trabajador seleccionado" << endl;
                        empleados[seleccion]->mostrarNombreTrabajador();
                        cout << endl << "Codigo: " << codigo;
                        cout << endl << "Sueldo mensual: " << salario;
                        cout << endl << "Descuento ISS: " << isss;
                        cout << endl << "Descuento AFP: " << afp;
                        cout << endl << "Descuento ISR: " << isr;
                        cout << endl << "Total a pagar: " << total;
                    } else {
                        cout << "No se encontro el trabajador seleccionado";
                    }
                } else {
                    cout << endl << "No hay trabajadores disponibles";
                }
                break;
            case 3:
                //Verificar que haya al menos un empleado
                if (contador > 0) {
                    cout << endl << endl << "Mostrando lista de trabajadores" << endl << endl;
                    //Recorrer la lista de trabajadores con su nombre
                    for (int i = 0; i < contador; i++) {
                        //Obtener codigo y sueldo
                        codigo = empleados[i]->getCodigoTrabajador();
                        salario = empleados[i]->getSueldoMensual();
                        //Imprimir los datos
                        cout << "--Trabajador " << i << "--" << endl;
                        cout << "Codigo: " << codigo << endl;
                        cout << "Nombre: ";
                        empleados[i]->mostrarNombreTrabajador();
                        cout << "Sueldo: " << salario << endl << endl;
                    }
                } else {
                    cout << endl << "No hay trabajadores disponibles";
                }
                break;
            case 4:
                //Cerrar el programa
                return 0;
                break;
            default:
                cout << endl << endl << "Opcion invalida";
                break;
        }

        //Peguntar si desear continuar
        cout << endl << endl << "¿Desea continuar? Si(1) No(0): ";
        cin >> bandera;
    }
    return 0;
}
