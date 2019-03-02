#include <iostream>

using namespace std;

//Funcion para calcular si hay un numero par
int par(int numero) {
    do {
        if (numero == 2) {
            return numero;
        } else if (numero == 1) {
            return numero;
        }
        numero = numero - 2;
    } while (numero >= 1);
}

int main()
{
    //Declarar variables
    int numero1;
    int numero2;
    cout << "--Programa para saber si dos numeros son par o impar" << "\n";
    //Pedir primer numero
    cout << "\nIngrese el primer numero: ";
    cin >> numero1;
    //Pedir segundo numero
    cout << "\nIngrese el segundo numero: ";
    cin >> numero2;
    if (par(numero1) == 2 && par(numero2) == 2) {
        cout << "\nLos dos numeros son pares";
    } else if (par(numero1) == 1 && par(numero2) == 1) {
        cout << "\nLos dos numeros son impares";
    } else if (par(numero1) == 2 && par(numero2) == 1) {
        cout << "\nEl primer numero es par y el segundo impar";
    } else if (par(numero1) == 2 && par(numero2) == 1) {
        cout << "\nEl primer numero es impar y el segundo es par";
    }

    return 0;
}
