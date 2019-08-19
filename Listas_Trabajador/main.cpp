#include "Lista.h"
#include <windows.h>
#include <iostream>

using namespace std;

int menu() {
    int op;
    cout << "\n1. Agregar estudiante\n";
    cout << "2. Mostrar lista de estudiantes\n";
    cout << "3. Eliminar estudiante\n";
    cout << "4. Ver detalles del estudiante\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> op;
    return op;
}

int main()
{
    int op, id, contador = 0;
    string nombre;
    string apellido;
    Lista lst;
    Nodo *tmp;

    do {
        op = menu();

        switch (op) {
            case 1:
                cout << "\nIngrese el ID: ";
                cin >> id;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese el apellido: ";
                cin >> apellido;
                lst.Insertar(Estudiante(id, nombre, apellido));
                contador++;
                cout << "\nEl estudiante se ha registrado con exito\n\n";
                break;
            case 2:
                cout << "\nLa lista de estudiantes es: ";
                lst.Mostrar();
                break;
            case 3:
                cout << "\nSeleccione el ID de un estudiante para eliminar: ";
                lst.Mostrar();
                if (contador > 0) {
                    cout << "ID seleccionado: ";
                    cin >> id;
                    lst.Eliminar(id);
                    contador--;
                    cout << "\nEl estudiante se ha eliminado con exito\n\n";
                }
                break;
            case 4:
                cout << "\nSeleccione el ID de un estudiante para mostrar detalles: ";
                lst.Mostrar();
                if (contador > 0) {
                    cout << "ID seleccionado: ";
                    cin >> id;
                    tmp = lst.Buscar(id);
                    cout << "\nDatos del estudiante:\n";
                    cout << "ID: " << tmp->elemento.getId() << "\n";
                    cout << "Nombre: " << tmp->elemento.getNombre() << "\n";
                    cout << "Apellido: " << tmp->elemento.getApellido() << "\n";
                    cout << "Promedio: " << tmp->elemento.getPromedio() << "\n\n";
                 }
                break;
        }
        system("pause");
    } while (op != 5);
    return 0;
}
