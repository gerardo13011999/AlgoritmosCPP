#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int numero1;
    int numero2;
    int numero3;
    cout << "--Programa que imprime en orden ascendente los numeros capturados--\n";
    cout << "\nIngrese el primer numero: ";
    cin >> numero1;
    cout << "\nIngrese el segundo numero: ";
    cin >> numero2;
    cout << "\nIngrese el tercero numero: ";
    cin >> numero3;
    if (numero1 > numero2 && numero2 > numero3) {
        cout << "\nLos numeros de mayor a menor son: " << numero1 << ", " << numero2 << ", " << numero3;
    } else if (numero1 > numero3 && numero3 > numero2) {
        cout << "\nLos numeros de mayor a menor son: " << numero1 << ", " << numero3 << ", " << numero2;
    } else if (numero3 > numero2 && numero2 > numero1) {
        cout << "\nLos numeros de mayor a menor son: " << numero3 << ", " << numero2 << ", " << numero1;
    } else if (numero1 > numero3 && numero3 > numero2) {
        cout << "\nLos numeros de mayor a menor son: " << numero1 << ", " << numero3 << ", " << numero2;
    } else if (numero2 > numero3 && numero3 > numero1) {
        cout << "\nLos numeros de mayor a menor son: " << numero2 << ", " << numero3 << ", " << numero1;
    } else if (numero2 > numero1 && numero1 > numero3) {
        cout << "\nLos numeros de mayor a menor son: " << numero2 << ", " << numero1 << ", " << numero3;
    } else if (numero1 == numero2) {
        cout << "\nLos numeros de mayor a menor son: " << numero1 << ", " << numero2 << ", " << numero3;
    } else if (numero1 == numero3) {
        cout << "\nLos numeros de mayor a menor son: " << numero1 << ", " << numero3 << ", " << numero2;
    } else if (numero3 == numero2) {
        cout << "\nLos numeros de mayor a menor son: " << numero2 << ", " << numero3 << ", " << numero1;
    } else {
        cout << "\nLos numeros son iguales";
    }
    return 0;
}
