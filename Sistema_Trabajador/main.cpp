#include "Persona.h"
#include "Trabajador.h"
#include "TrabajadorTiempoCompleto.h"
#include "TrabajadorPorHora.h"
#define TAM 5
#include <stdlib.h>
#include <iostream>

using namespace std;

int menu() {
    int op;
    cout << "1. Agregar trabajador\n";
    cout << "2. Mostrar detalles del trabajador\n";
    cout << "3. Mostrar detalles\n";
    cout << "4. Mostrar planilla\n";
    cout << "5. Salir\n";
    cout << "Elija una opcion: ";
    cin >> op;
    return op;
}

int main()
{
    Trabajador *ListTrab[TAM];
    int op, id, numeroHorasTrab, contador = 0;
    string nombre, apellido;
    float salario;

    do {
        op = menu();

        switch (op) {
            case 1:
                ///Agregar trabajador
                if (contador < 5) {
                    cout << "\n1. Trabajador tiempo completo";
                    cout << "\n2. Trabajador por horas";
                    cout << "\nElija una opcion: ";
                    cin >> op;
                    cout << "\nIngrese el ID: ";
                    cin >> id;
                    cout << "Ingre el nombre: ";
                    cin >> nombre;
                    cout << "Ingrese el apellido: ";
                    cin >> apellido;
                    if (op == 1) {
                        ///Trabajador de tiempo completo
                        cout << "Ingrese el salario: ";
                        cin >> salario;
                        TrabajadorTiempoCompleto *TTC = static_cast<TrabajadorTiempoCompleto*> (ListTrab[contador]);
                        ListTrab[contador] = new TrabajadorTiempoCompleto(id, nombre, apellido, salario);
                    } else {
                        ///Trabajador por hora
                        cout << "Ingrese el sueldo por hora: ";
                        cin >> salario;
                        cout << "Ingrese el numero de horas trabajadas: ";
                        cin >> numeroHorasTrab;
                        TrabajadorPorHora *TPH = static_cast<TrabajadorPorHora*> (ListTrab[contador]);
                        ListTrab[contador] = new TrabajadorPorHora(id, nombre, apellido, numeroHorasTrab, salario);
                    }
                    contador++;
                } else {
                    cout << "La lista esta llena";
                }
                break;
            case 2:
                if (contador > 0) {
                    for (int i = 0; i < contador; i++) {
                        cout << "\n" << (i + 1) << ". " << ListTrab[i]->getNombre() << " " << ListTrab[i]->getApellido();
                    }
                    cout << "\nElija trabajador: ";
                    cin >> op;
                    op--;
                    ///Mostrar datos del trabajador
                    if (ListTrab[op]->getTipoTrabajador() == 1) {
                        ///Imprimir datos por aparte TTC
                        TrabajadorTiempoCompleto *TTC = static_cast<TrabajadorTiempoCompleto*> (ListTrab[op]);
                        cout << "\nDescuento ISS: $" << TTC->getDescuentoIsss();
                        cout << "\nDescuento AFP: $" << TTC->getDescuentoAfp();
                        cout << "\nTotal descuento: $" << TTC->getTotalDescuentos();
                    } else {
                        ///Imprimir datos por aparte TPH
                        TrabajadorPorHora *TPH = dynamic_cast<TrabajadorPorHora*> (ListTrab[op]);
                        cout << "\nNumero de horas trabajadas: " << TPH->getNumeroHorasTrab();
                        cout << "\nSalario por hora: " << TPH->getSueldoPorHora();
                    }
                } else {
                    cout << "\nNo hay trabajadores en la lista\n";
                }
                break;
            case 3:
                if (contador > 0) {
                    for (int i = 0; i < contador; i++) {
                        cout << "\n" << (i + 1) << ". " << ListTrab[i]->getNombre() << " " << ListTrab[i]->getApellido();
                    }
                    cout << "\nElija trabajador: ";
                    cin >> op;
                    op--;
                    ///Mostrar datos del trabajador
                    cout << "\n--Detalles de " << ListTrab[op]->getNombre() << " " << ListTrab[op]->getApellido() << "--";
                    cout << "\nID: " << ListTrab[op]->getId();
                    cout << "\nNombre completo: " << ListTrab[op]->getNombre() << " " << ListTrab[op]->getApellido() << "\n";
                } else {
                    cout << "\nNo hay trabajadores en la lista\n";
                }
                break;
            case 4:
                if (contador > 0) {
                    ///Mostrar planilla de trabajadores
                    cout << "\nEmpleados mensuales\n";
                    cout << "Nombre\t\tSalario bruto\tDeduccion\tSalario neto\n";
                    for (int i = 0; i < contador; i++) {
                        TrabajadorTiempoCompleto *TTC = static_cast<TrabajadorTiempoCompleto*> (ListTrab[i]);
                        if (TTC->getTipoTrabajador() == 1) {
                            cout << TTC->getNombre() << " " << TTC->getApellido() << "\t" << (TTC->getTotalPagar() + TTC->getTotalDescuentos()) << "\t\t" << TTC->getTotalDescuentos() << "\t\t" << (TTC->getDescuentoIsss() * 10 / 0.075) << "\n";
                        }
                    }
                    cout << "\n\nEmpleados por hora\n";
                    cout << "Nombre\tHoras\tTarifa\tDeduccion\tSalario neto\n";
                    for (int i = 0; i < contador; i++) {
                        TrabajadorPorHora *TPH = static_cast<TrabajadorPorHora*> (ListTrab[i]);
                        if (TPH->getTipoTrabajador() == 2) {
                            cout << TPH->getNombre() << " " << TPH->getApellido() << "\t" << TPH->getSueldoPorHora() << "\t" << ((TPH->getNumeroHorasTrab() * TPH->getSueldoPorHora()) * 0.1) << "\t\t" << ((TPH->getNumeroHorasTrab() * TPH->getSueldoPorHora()) * 0.9);
                        }
                    }
                } else {
                    cout << "\nNo hay trabajadores en la lista\n";
                }
                break;
        }
        cout << endl << endl;
        ///Reiniciar el menu
        system("pause");
        system("cls");
    } while(op != 5);
    return 0;
}
