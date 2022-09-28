/*
    Unidad 2 - Impuestos
    Autor: María Delfina Deserti
    Fecha: 23/09/2022
    Descripción: Pregunta al usuario su renta anual y muestra el impuesto que le corresponde
*/

#include <iostream>
using namespace std;

int main()
{
    int renta;
    cout << "Ingrese el valor de su renta anual y le diremos el impuesto que le corresponde"<< endl;
    cin >> renta;
    if (renta<10000)
    {
        cout<< "El impuesto es del 5%"<<endl;
        cout<< "Debe pagar: "<< (renta*1.05)<< endl;
    }
    else
    {
        if (renta<20000)
        {
            cout<< "El impuesto es del 15%"<<endl;
            cout<< "Debe pagar: "<< (renta*1.15)<< endl;
        }
        else
        {
            if (renta<35000)
            {
                cout<< "El impuesto es del 20%"<<endl;
                cout<< "Debe pagar: "<< (renta*1.2)<< endl;
            }
            else
            {
                if (renta<60000)
                {
                    cout<< "El impuesto es del 30%"<<endl;
                    cout<< "Debe pagar: "<< (renta*1.3)<< endl;
                }
                else
                {
                    cout<< "El impuesto es del 45%"<<endl;
                    cout<< "Debe pagar: "<< (renta*1.45)<< endl;
                }
                
            }
            
            
        }
        
        
    }
    
    
    return 0;
}
