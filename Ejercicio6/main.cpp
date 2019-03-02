#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Declaracion de variables
    string cadena;
    string invertido;

    //Presentacion
    cout << "--Programa para invertir una cadena de texo--\n\n";
    cout << "Ingresa una cadena de texto: ";
    cin >> cadena;

    for (int i = cadena.size(); i >= 0 ; i--)
         invertido += cadena[i];

    cout << endl << "El texto normal es: " << cadena << endl;
    cout << "El texto invertido es: " << invertido << endl;
    return 0;
}
