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
        cout << num << "\n";
    }
}

int main()
{
    //Presentacion
    cout << "--Programa que imprime los numeros primos del 1 al 100--\n\n";
    for (int x = 0; x < 100; x++) {
        primo(x);
    }
    return 0;
}
