#include <iostream>

using namespace std;

int main()
{

    // Declare variable : old - Declarar la variable edad
    int old = 0;

    // Introduce the old - Introduce la edad
    cout << "Let introduce your old" << endl;
    cin >> old;

    // Verify payment based on age using conditionals - Verificar el pago dependiendo de la edad mediante condicionales

    // Si la edad es menor a 5 , la entrada es gratis
    if (old < 5)
    {
        cout << "Children can enter for free";
    }
    //Si la edad es igual o mayor a 5 y menor a 12 años la entrada es de $5
    else if (old >= 5 && old <= 12)
    {
        cout << "Admission is for children $5";
    }
     //Si la edad es mayor a 12 años , la entrada es de $10
    else if (old > 12)
    {
        cout << "Admission is for children $10";
    }
    else
    {
        cout << "Thank you :)";
    }

    return 0;
}
