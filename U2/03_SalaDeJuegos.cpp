/*
    Unidad 2 - ejercicio 3
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: Según la edad ingresada, indica el precio de la entrada a la sala de juegos
*/

#include <iostream>
using namespace std;

int main()
{
    int e;
    char op;
    do
    {
        cout << "Ingrese la edad del cliente"<<endl;
        cin>>e;
        if (e<4)
        {
            cout<<"La entrada es gratis"<<endl;
        }else 
            if (e<=18)
            {
                cout<<"La entrada cuesta $5"<<endl;
            }else
            {
                cout<<"La entrada cuesta $10"<<endl;
            }
        cout<<"¿Desea hacer otra consulta? (s/n)"<<endl;
        cin>>op;
    } while (op=='s');   
    return 0;
}
