#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    bool activo = true;
    int respuesta, personas = 0;
    float ganancias = 0;

    //Presentacion
    cout << "--Programa que permite calcular el total de personas que ingresan a una fiesta y el total de dinero recaudado--\n";
    while (activo == true) {
        cout << "\nIndicaciones:\nPara agregar una nueva persona (1)\nPara terminar el programa (2)\n";
        cin >> respuesta;
        if (respuesta == 1) {
                personas = personas + 1;
            cout << "Seleccione una opcion para el ingreso de la persona: Preferencia(1), General(2): ";
            cin >> respuesta;
            if (respuesta == 1) {
                ganancias = ganancias + 20;
            } else {
                ganancias = ganancias + 10;
            }
        } else {
            activo = false;
        }
    }
    cout << endl << "Informe de resultados" << endl << "Numero total de personas: " << personas << endl << "Ganancias totales: " << ganancias;
    return 0;
}
