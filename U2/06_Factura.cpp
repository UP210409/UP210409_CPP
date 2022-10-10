/*
    Unidad 2 - ejercicio 5
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: Se ingresan 6 temp. e indica el promedio, la minima y la máxima
*/

#include <iostream>
using namespace std;

int main()
{
    int cant=0;
    float p=0, sum=0;
    do
    {
        cout<<"Ingrese la cantidad de productos"<<endl;
        cin>>cant;
        cout<<"Ingrese el precio del producto"<<endl;
        cin>>p;
        sum= sum + p*cant;
    } while (cant!=0);
    cout<<"Imprimiendo factura ..."<<endl;
    cout<<"=============================="<<endl;
    cout<<"El total a pagar es: $"<<sum<<endl;
    
    return 0;
}
