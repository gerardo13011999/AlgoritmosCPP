#include<cstdlib>
#include "ListaDoble.h"
#include <iostream>

using namespace std;

int main()
{
    system("color f0");
    ListaDoble lst;
    lst.Insertar(1);
    lst.Insertar(2);
    lst.Insertar(3);
    lst.Modificar(3, 7);
    lst.Eliminar(2);
    lst.Mostrar(1);
    return 0;
}
