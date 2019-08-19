#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
    Lista lst;
    lst.Insertar(5);
    lst.Insertar(4);
    lst.Insertar(7);
    lst.Modificar(2, 1);
    lst.Eliminar(3);
    lst.Mostrar();
    return 0;
}
