/*
    Unidad 2 - Abecedario
    Autor: María Delfina Deserti
    Fecha: 23/09/2022
    Descripción: Imprime el Abecedario con ascii
*/

#include <iostream>
using namespace std;

int main()
{
    char letra= 'A';
    //Abecedario normal
    for (int i = 0; i < 26; i++)
    {
        cout <<letra<< "\t";
        letra=letra+1;
    }
    cout <<endl;
    // minúsculas y mayúsculas
    letra=letra+6;
    for (int i = 0; i <26; i++)
    {
        cout <<letra << "\t";
        letra= letra + 1;
    }
    cout <<endl;
    // del 1 al 10
    for (int i = 0; i < 10; i++)
    {
        cout<< i+1 <<"\t";
    }
    for (int j = 10; j > 0; j--)
    {
        cout<< j << "\t";
    }

    return 0;
}
