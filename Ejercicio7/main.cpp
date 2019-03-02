#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    string palabra;
    int contador = 0;

    //Presentacion
    cout << "--Programa que cuenta las vocales en una palabra--\n\n";
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (int i = palabra.size(); i >= 0 ; i--) {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u') {
            contador = contador + 1;
        }
    }
    cout << "\n\n" << "Hay " << contador << " vocales";
    return 0;
}
