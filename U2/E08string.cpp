/*
    Unidad 2 - ejercicio en clase string
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: aprender del string
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string cadena = "universidad";
    int sum=0, tam = cadena.length();
    for (int i = 0; i < tam; i++)
    {
        if (cadena[i]=='i' || cadena[i]=='e' || cadena[i]=='a' || cadena[i]=='o')
        {
            sum++;
        }
    }
    cout << endl<<"Hay "<<sum<<" vocales"<<endl;

    //otro ejercicio
    char texto[20]="Politecnica";
    int i=0;

    while (texto[i] != '\0')
    {
        cout<< texto[i]<<" ";
        i++;
    }
    

    return 0;

}