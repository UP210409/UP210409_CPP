/*
    Unidad 2 - Tablas con pregunta
    Autor: María Delfina Deserti
    Fecha: 06/10/2022
    Descripción: Muestra la tabla de multiplicar del numero ingresado cuantas veces quieras
*/

#include <iostream>
using namespace std;

int main()
{
    char op;
    int n;
    do
    {
        cout << "Ingrese un número" << endl;
        cin >>n;
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " <<(i*n)<< endl;
        }
        cout << "¿Desea obtener otra tabla de multiplicar?" << endl << "Ingrese s para Si, n para NO"<<endl;
        cin >>op;

    } while (op=='s');
    cout << "fin" << endl;
    
    return 0;
}