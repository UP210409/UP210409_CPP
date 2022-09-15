/*
    Unidad 1 - Tipos de Datos
    Autor: María Delfina Deserti
    Fecha: 15/09/2022
    Descripción: Muestra los diferentes tipos de datos en c++
*/

#include <iostream>
#include <stdio.h>
using namespace std;

//Variables Globales
#define PI 3.1416
const float pi=3.1415;

int main()
{
    int entero = -2147483647;
    float flotante = 3.4e38;
    double grande = 2.23859823578572;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << " bytes" << endl;
    cout << "El caracter es: "<< caracter << endl;
    cout << "El tamaño del caracter es: " << sizeof(caracter) << " bytes." << endl;
    cout << "El valor de pi es: " << pi << endl;
    cout << "El valor de PI es: " << PI << endl;
    //getchar();

    return 0;
}
