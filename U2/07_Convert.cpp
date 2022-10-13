/*
    Unidad 2 - ejercicio 7
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: se ingresa un número binario y se lo convierte a decimal
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string bin;
    int tam, sum=0;
    cout<<"Ingrese el número binario a convertir"<<endl;
    cin>>bin;
    tam=bin.size();
    for (int i = (tam-1); i >=0; i--)
    {
        if (bin[i]=='1')
        {
            sum=sum + pow(2,((tam-1)-i));
        }
    }
    cout<<"El numero "<<bin<<" en decimal es: "<<sum<<endl;

    

    return 0;
}