/*
    Unidad 1 - Edades
    Autor: María Delfina Deserti
    Fecha: 23/09/2022
    Descripción: Muestra mensaje dependiendo la edad ingresada
*/

#include <iostream>
using namespace std;

int main()
{
    int e = 0;
    cout << "Ingrese una edad" << endl;
    cin >> e;
    do
    {
        if (e >= 1 && e <= 150)
        {
            if (e <= 30)
            {
                cout << "1ra edad" << endl;
            }
            else
            {
                if (e <= 60)
                {
                    cout << "2da edad" << endl;
                }
                else
                {
                    if (e <= 90)
                    {
                        cout << "3ra edad" << endl;
                    }
                    else
                    {
                        cout << "Horas extra" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "Eres marciano" << endl;
        }
        cout << "Ingrese una edad o 00 para finalizar" << endl;
        cin >> e;
    }while (e != 00);
    cout << "fin" << endl;
    return 0;
}
