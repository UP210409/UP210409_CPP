/*
    Unidad 2 - Todas las tablas del 1 al 10 - For For
    Autor: María Delfina Deserti
    Fecha: 06/10/2022
    Descripción: Muestra todas las tablas de multiplicar utilizando 2 for anidados
*/
#include <iostream>
using namespace std;

int main()
{

    //TODAS LAS TABLAS DE 1 A 10
    for (int i = 1; i <=10; i++)
    {
        cout << "Tabla del "<<i<<endl;
        for (int j = 1; j <=10; j++)
        {
            cout << i << " x " << j << " = " <<(i*j)<< endl;
        }
        cout<<endl;
    }
}