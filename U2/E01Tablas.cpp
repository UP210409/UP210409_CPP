/*
    Unidad 2 - Tablas
    Autor: María Delfina Deserti
    Fecha: 04/10/2022
    Descripción: Muestra la tabla de multiplicar del numero ingresado
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un número" << endl;
    cin >>n;
    
    cout << "Tabla FOR ascendente" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
    }

    cout << endl << "Tabla FOR descendente" << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
    }

    cout << endl << "Tabla WHILE ascendente" << endl;
    int i=1;
    while ((i>=1) && (i<=10))
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i++;
    }
    i--;
    cout << endl << "Tabla WHILE descendente" << endl;
    while ((i<=10) && (i>=1))
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i--;
    }
    i++;
    cout << endl << "Tabla DO WHILE ascendente" << endl;
    do
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i++;

    } while (i<=10);
    i--;
    cout << endl << "Tabla DO WHILE descendente" << endl;
    do
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i--;

    } while (i>=1);

    
    return 0;
}
