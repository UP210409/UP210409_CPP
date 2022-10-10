/*
    Unidad 2 - ejercicio 2
    Autor: María Delfina Deserti
    Fecha: 06/10/2022
    Descripción: evaluación de empleados y cálculo de sus sueldo según su rendimiento
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float s, ev2;
    int ev;
    char op;
    do
    {
        cout << "Ingrese 1, 2, 3 segun la evaluación de este empleado" <<endl;
        cout << "1) 0.0 \n2) 0.4 \n3) 0.6 o más"<<endl;
        cin >> ev;
        cout << "Ingrese el sueldo del empleado"<< endl;
        cin >> s;
        switch (ev)
        {
        case 1:
            cout <<"El rendimiento es inaceptable"<<endl;
            cout <<"El sueldo que recibirá el empleado según su rendimiento es: " << s << endl;
            break;
        case 2: 
            cout <<"El rendimiento es aceptable"<<endl;
            cout <<"El sueldo que recibirá el empleado según su rendimiento es: " << s+(2400*0.4) << endl;
            break;
        case 3:
            cout <<"El rendimiento es meritorio"<<endl;
            cout <<"¿Cuál es la evaluacion exacta?"<<endl;
            cin >> ev2;
            if (ev2>=0.6)
            {
                cout <<"El sueldo que recibirá el empleado según su rendimiento es: " << s+(2400*ev2) << endl;
            }else
            {
                cout<<"La evaluacion exacta debe ser mayor o igual a 0.6, intentelo denuevo"<<endl;
            }
            break;
        default:
            cout << "La evaluación es incorrecta"<<endl;
            break;
        }  
        cout << "--Desea calcular el sueldo de otro empleado?? (S/N)--" <<endl;
        cin >> op;

    } while (op=='s' || op=='S');
    
    return 0;
}
