#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    char frase[50];

    //Presentancion
    cout << "--Programa para encriptar--\n\n";
    cout << "Introduzca una frase: ";
    cin >> frase;

    for(int x = 0; x < 50; x++)
    {
      if (frase[x]!='\0')
      {
       frase[x]=frase[x]+3;
      }
    }
    cout << "\n\nLa nueva frase es: " << frase;
    return 0;
}
