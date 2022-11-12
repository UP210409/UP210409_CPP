/*
    Unidad 2 - string
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: suma, resta, multiplicación y división de 2 números
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, op;
    cout << "Ingrese 2 numeros:" << endl;
    cin >> a;
    cin >> b;
    do
    {
        cout << "¿Qué operación desea hacer entre estos números?" << endl;
        cout << "1) Suma" << endl
             << "2) Resta" << endl
             << "3)Multiplicacion" << endl
             << "4)Division" << endl
             << "0) Salir" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "La suma es: " << a + b << endl;
            break;
        case 2:
            cout << "La resta es: " << a - b << endl;
            break;
        case 3:
            cout << "La multiplicacion es: " << a * b << endl;
            break;
        case 4:
            if (b!=0)
            {
                cout << "La division es: " << a / b << endl;
            }else
            {
                cout << "La division es: inválida" <<endl;
            }  
            break;
        case 0:
            cout << "Finalizo" << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    } while (op != 0);

    return 0;
}
