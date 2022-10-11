/*
    Unidad 2 - ejercicio práctica
    Autor: María Delfina Deserti
    Fecha: 11/10/2022
    Descripción: break termina el ciclo, continue salta al ciclo qeu sigue.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    for (int i = 0; i <=10; i++)
    {
        if (i==6)
        {
            break;//continue;
        }else
        {
            cout << i <<endl;
        }
        cout<< "Numero: "<< i << endl;
    }
    cout << "HECHO"<<endl;
    return 0;
}
