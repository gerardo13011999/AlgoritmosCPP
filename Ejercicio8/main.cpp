#include <iostream>
#include <string>

using namespace std;

int main() {
    //Declarar variables
    string texto;
    int aux = 0, igual = 0;

    //Presentancion
    cout << "--Programa para encontrar palabras polindromas--\n\n";
    cout << "Ingrese una palabra: ";

    //Pedir valores
    getline(cin >> ws, texto);

    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo" << endl;
    }
    return 0;
}
