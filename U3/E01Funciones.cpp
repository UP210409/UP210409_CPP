/*
    Unidad 2 - string
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: suma, resta, multiplicación y división de 2 números
*/

#include <iostream>
#include <math.h>
using namespace std;

int Doble(int a)
{
    int r;
    r=a*2;
    return r;
}

int Sumatoria(int n)
{
    int r=0, i=0;
    while (i <= n)
        {
            r = r + n;
            i++;
        }
    return r;
}

int main()
{
    int x=5, r;
    r=Doble(x);
    cout<<"El doble es: "<<r<<endl;
    r=Sumatoria(x);
    cout<<"La sumatoria es: "<<r<<endl;
    return 0;
}
