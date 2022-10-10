/*
    Unidad 2 - ejercicio 4
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: indica si la pizza es vegetariana o no y enlista los ingredientes
*/

#include <iostream>
using namespace std;

int main()
{
    char veg, op;
    int ig;
    do
    {
        cout << "Desea ordenar una pizza vegetariana? (y/n)" << endl;
        cin >> veg;
        if (veg == 'y')
        {
            cout << "Ingrese 1 o 2 segun el ingrediente que desee" << endl;
            cout << "1) Tofu \n2) Pimientos" << endl;
            cin >> ig;
            switch (ig)
            {
            case 1:
                cout << "Su pizza es vegetariana y lleva tomate, mozzarella y Tofu" << endl;
                break;
            case 2:
                cout << "Su pizza es vegetariana y lleva tomate, mozzarella y Pimientos" << endl;
                break;
            default:
                cout << "No ingreso un ingrediente valido" << endl;
            }
        }
        else
        {
            cout << "Ingrese 1 ,2 o 3 segun el ingrediente que desee" << endl;
            cout << "1) Peperoni \n2) Jamon\n3) Salmon" << endl;
            cin >> ig;
            switch (ig)
            {
            case 1:
                cout << "Su pizza NO es vegetariana y lleva tomate, mozzarella y Peperoni" << endl;
                break;
            case 2:
                cout << "Su pizza NO es vegetariana y lleva tomate, mozzarella y Jamon" << endl;
                break;
            case 3:
                cout << "Su pizza NO es vegetariana y lleva tomate, mozzarella y Salmon" << endl;
                break;
            default:
                cout << "No ingreso un ingrediente valido" << endl;
                break;
            }
        }
        cout << "Desea pedir otra pizza?(y/n)" << endl;
        cin >> op;
    } while (op == 'y');

    return 0;
}
