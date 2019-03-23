#include <iostream>

using namespace std;

#include "Cliente.h"
#include "Producto.h"
#include "Fecha.h"

void mostrarMenu() {
    cout << endl << endl <<"--Menu--";
    cout << endl << "Agregar Cliente (1)";
    cout << endl << "Agregar producto (2)";
    cout << endl << "Agregar producto al carrito (3)";
    cout << endl << "Mostrar carrito por cliente (4)";
    cout << endl << "Salir (5)";
}

bool validarFecha(int a, int m, int d) {
    ///Validar mes
    if (m >= 1 && m <= 12) {
        ///Validar el año
        if (a >= 2000 && a <= 2050) {
            if (m == 2) {
                ///Validar si es bisiesto el año
                if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)) {
                    ///Validar dias
                    if (d <= 29) {
                        return false;
                    } else {
                        return true;
                    }
                } else {
                    ///Validar dias
                    if (d <= 28) {
                        return false;
                    } else {
                        return true;
                    }
                }
            } else if (m == 4 || m == 6 || m == 9 || 11) {
                ///Validar dias
                if (d <= 30) {
                    return false;
                } else {
                    return true;
                }
            } else {
                ///Validar dias
                if (d <= 31) {
                    return false;
                } else {
                    return true;
                }
            }
        } else {
            return true;
        }
    } else {
        return true;
    }
}

int main()
{
    ///Declaracion de variables
    int opcion = 1, contadorClientes = 0, contadorProductos = 0, cantidad, d, m, a;
    string nombre;
    float precio;
    Cliente *clientes[10];
    Producto *productos[10];
    Fecha f;
    bool bandera = true;

    ///Presentacion
    cout << "--Sistema de tienda--" << endl;
    cout << "Autor: Douglas Gerardo Flores";

    ///Ejecucion del programa
    while(opcion == 1) {
        ///Presentar el menu
        mostrarMenu();
        cout << endl << "Seleccione una opcion: ";
        cin >> opcion;

        ///Separar en algoritmos mas pequeños
        switch (opcion) {
            case 1:
                //Validar que hayan menos que 10
                if (contadorClientes < 10) {
                    cout << endl << "Ingrese los datos del cliente:";
                    //Agregar datos
                    cout << endl << "ID: " << (contadorClientes + 1);
                    cout << endl << "Nombre: ";
                    cin >> nombre;
                    //Guardar los datos
                    clientes[contadorClientes] = new Cliente;
                    clientes[contadorClientes]->setId(contadorClientes + 1);
                    clientes[contadorClientes]->setNombre(nombre);
                    cout << "Cliente agregado exitosamente";
                    //Sumar un cliente
                    contadorClientes++;
                } else {
                    cout << endl << "Los clientes estan completos";
                }
                break;
            case 2:
                if (contadorProductos < 10) {
                    cout << endl << "Ingrese los datos del producto:";
                    //Agregar datos
                    cout << endl << "ID: " << (contadorProductos + 1);
                    cout << endl << "Nombre: ";
                    cin >> nombre;
                    cout << "Precio: ";
                    cin >> precio;
                    while (precio < 0) {
                        cout << "Precio invalida, seleccione el precio:";
                        cin >> precio;
                    }
                    cout << "Cantidad en inventario: ";
                    cin >> cantidad;
                    while (cantidad < 0) {
                        cout << "Cantidad invalidad, seleccione la cantidad en inventario:";
                        cin >> cantidad;
                    }
                    cout << "Fecha de vencimiento (DD/MM/AAAA)" << endl;
                    while (bandera) {
                        cout << "Dia: ";
                        cin >> d;
                        cout << "Mes: ";
                        cin >> m;
                        cout << "Anio: ";
                        cin >> a;
                        bandera = validarFecha(a, m, d);
                        if (bandera == true) {
                            cout << "Fecha incorrecta, por favor volver a ingresarla" << endl;
                        }
                    }
                    //Usar la clase auxiliar fecha
                    f.setDia(d);
                    f.setMes(m);
                    f.setAnio(a);
                    //Guardar los datos
                    productos[contadorProductos] = new Producto;
                    productos[contadorProductos]->setId(contadorProductos + 1);
                    productos[contadorProductos]->setNombre(nombre);
                    productos[contadorProductos]->setPrecio(precio);
                    productos[contadorProductos]->setCantidad(cantidad);
                    productos[contadorProductos]->setFechaVencimiento(f);
                    cout << "Prdoucto agregado exitosamente";
                    //Sumar producto
                    contadorProductos++;
                } else {
                    cout << endl << "El inventario de productos esta lleno";
                }
                break;
            case 3:
                if (contadorClientes > 0) {
                    cout << endl << "Seleccione un cliente: ";
                    //Listar clientes
                    for (int i = 0; i < contadorClientes; i++) {
                        cout << endl << (i+1) << ". " << clientes[i]->getNombre();
                    }
                    cout << endl << "Cliente seleccionado: ";
                    cin >> opcion;
                    opcion--;
                    //Listar productos
                    if (contadorProductos > 0) {
                        cout << endl << "Seleccione un producto: ";
                        for (int i = 0; i < contadorProductos; i++) {
                            cout << endl << (i+1) << ". " << productos[i]->getNombre();
                        }
                        cout << endl << "Producto selecionado: ";
                        cin >> d;
                        d--;
                        if (clientes[opcion]->getNumeroProductos() < 5) {
                            //Agregar el producto al carrito del cliente
                            cout << endl << "Seleccione la cantidad: ";
                            cin >> m;
                            while (m > productos[d]->getCantidad() && m > 0) {
                                cout << "No hay suficiente inventario o cantidad invalida, seleccione la cantidad:";
                                cin >> m;
                            }
                            clientes[opcion]->AddProductoALista(*productos[d]);
                            cout << "Producto agregado al carrito del cliente exitosamente";
                            //Descontar del inventario
                            productos[d]->setCantidad(productos[d]->getCantidad() - m);
                        } else {
                            cout << "El carrito del cliente esta lleno";
                        }
                    } else {
                        cout << endl << "No hay productos en el inventario";
                    }
                } else {
                    cout << endl << "No hay clientes disponibles";
                }
                break;
            case 4:
                if (contadorClientes > 0) {
                    cout << endl << "Seleccione un cliente: ";
                    //Listar clientes
                    for (int i = 0; i < contadorClientes; i++) {
                        cout << endl << (i+1) << ". " << clientes[i]->getNombre();
                    }
                    cout << endl << "Cliente seleccionado: ";
                    cin >> opcion;
                    opcion--;
                    //Renderizar la lista de productos del cliente seleccionado
                    if (clientes[opcion]->getNumeroProductos() != 0) {
                        cout << endl << "El carrito de compras es:" << endl;
                        for (int i = 0; i < clientes[opcion]->getNumeroProductos(); i++) {
                            cout << (i + 1) << ". " << clientes[opcion]->getListaProductos()[i].getNombre() << endl;
                        }
                    } else {
                        cout << endl << "El cliente seleccionado no tiene productos en el carrito de compras";
                    }
                } else {
                    cout << endl << "No hay clientes disponibles";
                }
                break;
            case 5:
                return 0;
                break;
        }

        ///Preguntar si desea continuar
        cout << endl << endl << "Desea continuar? Si(1) No(0): ";
        cin >> opcion;
    }
}
