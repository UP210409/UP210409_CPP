/*
    Unidad 2 - ejercicio práctica
    Autor: María Delfina Deserti
    Fecha: 11/10/2022
    Descripción: Sumatoria y debug
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=1, b=-8, c=15, disc, x1, x2;
    disc= pow(b,2)-(4*a*c);
    cout <<disc<<endl;
    if (disc>=0)
    {
        disc= pow(disc,0.5);
        x1=(-b-disc)/2*a;
        x2=(-b+disc)/2*a;
        cout<<"Las raíces son: X1= "<<x1<<" X2= "<<x2<<endl;
    }else
    {
        cout << "No tiene raíces reales"<<endl;
        
    }
    
    
    return 0;
}
