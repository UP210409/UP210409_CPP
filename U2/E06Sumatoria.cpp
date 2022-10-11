/*
    Unidad 2 - ejercicio práctica
    Autor: María Delfina Deserti
    Fecha: 11/10/2022
    Descripción: Sumatoria y debug
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0, i = 1, num, fac = 1;
    cout << "Ingrese el numero de la sumatoria y el factorial: " << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "El factorial es: 1" << endl;
        cout << "La sumatoria es: 0" << endl;
    }
    else
    {
        while (i <= num)
        {
            sum = sum + i;
            fac = fac * i;
            i++;
        }
        cout << "La sumatoria es: " << sum << endl;
        cout << "El factorial es: " << fac << endl;
    }

    return 0;
}
