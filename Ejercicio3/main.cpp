#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int numero;
    cout << "--Programa que imprime la tabla de multiplicacion de un numero--\n\n";
    cout << "Ingrese el numero: ";
    cin >> numero;
    for (int x = 1; x <= 10; x++) {
        cout << "\n" << numero << " x " << x << " = " << numero*x;
    }
    return 0;
}
