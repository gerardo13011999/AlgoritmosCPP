#include <iostream>

using namespace std;

void primo(int num) {
    //Declaracion de variables
    int divisor = 1, divisores = 0;
    do {
        if(num % divisor == 0){
            divisores++;
        }
        divisor++;
    } while (divisor <= num);
    if(divisores == 2){
        cout << "\nEl numero " << num << " es primo";
    }else{
        cout <<"\nEl numero " << num << " no es primo";
    }
}

int main() {
    //Declaracion de variables
    int num;
    //Presentacion
    cout << "--Programa para calcular numeros primos--\n\n";
    cout << "Ingrese numero: ";
    cin >> num;
    primo(num);
    return 0;
}
