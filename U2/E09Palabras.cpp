/*
    Unidad 2 - ejercicio en clase string - palabras
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: contar las palabras que hay en un string
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char mensaje[50]= "Yo soy tu padre";
    int i =0, cont=0;
    while (mensaje[i]!= '\0')
    {
        if (mensaje[i]==' ')
        {
            cont++;
        }
        i++;
    }
    cout<<"El mensaje contiene: "<<cont+1<<" palabras"<<endl;
    return 0;
}
