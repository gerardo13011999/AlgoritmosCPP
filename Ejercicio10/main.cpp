#include <iostream>

using namespace std;

int main()
{
    //Declarar variables
    int n,i;
    long double factorial;

    //Presentacion
    cout << "--Programa para calcular el factorial de un numero--\n\n";
    cout << "Introduce un numero: ";
    cin >> n;

   factorial = 1;
   for(i = 1; i <= n; i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
}
