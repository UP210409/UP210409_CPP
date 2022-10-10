*Delfina Deserti*
# UNIDAD 2 

* 01_Impuestos
* 02_Rendimiento
* 03_SalaDeJuegos
* 04_Pizzeria
* 05_Temperaturas
* 06_Factura
* 07_Convert
* /Imagenes

---
## 01_Impuestos

*It asks the user his anual rent and calculate the taxes he must pay*  
**Execution**  
*Rent <10000*  
![Impuestos](/U2/Imagenes/Impuestos01.png )  
*10000 < Rent < 20000*  
![Impuestos](/U2/Imagenes/Impuestos02.png )  
*20000 < Rent < 35000*  
![Impuestos](/U2/Imagenes/Impuestos03.png )  
*35000 < Rent < 60000*  
![Impuestos](/U2/Imagenes/Impuestos04.png )  
*60000 < Rent*  
![Impuestos](/U2/Imagenes/Impuestos05.png )  

**Code**
```
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
```
---
## 02_Rendimiento

*workers evaluation - calculation of the salary dependind of their performance*  
**Execution**  
*All posibilities of evaluation with salary=14000*  
![Rendimiento](/U2/Imagenes/Rendimiento.png )  
**Code**
```
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
```
---
## 03_SalaDeJuegos

*It indicates the price of the ticket depending of the client age*  
**Execution**  
*All the possible client ages*  
![SalaDeJuegos](/U2/Imagenes/SalasDeJuegos.png )  
**Code**
```
/*
    Unidad 2 - ejercicio 3
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: Según la edad ingresada, indica el precio de la entrada a la sala de juegos
*/

#include <iostream>
using namespace std;

int main()
{
    int e;
    char op;
    do
    {
        cout << "Ingrese la edad del cliente"<<endl;
        cin>>e;
        if (e<4)
        {
            cout<<"La entrada es gratis"<<endl;
        }else 
            if (e<=18)
            {
                cout<<"La entrada cuesta $5"<<endl;
            }else
            {
                cout<<"La entrada cuesta $10"<<endl;
            }
        cout<<"¿Desea hacer otra consulta? (s/n)"<<endl;
        cin>>op;
    } while (op=='s');   
    return 0;
}
```
---
## 04_Pizzeria

*It indicates if the client order a vegetarian pizza or not and it makes a list of the ingredients*  
**Execution**  
*Order a vegetarian pizza*  
![Pizzeria](/U2/Imagenes/Pizzeria01.png )  
*Order a not vegetarian pizza*  
![Pizzeria](/U2/Imagenes/Pizzeria02.png )  
**Code**
```
/*
    Unidad 2 - ejercicio 4
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: indica si la pizza es vegetariana o no y enlista los ingredientes
*/

#include <iostream>
using namespace std;

int main()
{
    char veg, op;
    int ig;
    do
    {
        cout << "Desea ordenar una pizza vegetariana? (y/n)" << endl;
        cin >> veg;
        if (veg == 'y')
        {
            cout << "Ingrese 1 o 2 segun el ingrediente que desee" << endl;
            cout << "1) Tofu \n2) Pimientos" << endl;
            cin >> ig;
            switch (ig)
            {
            case 1:
                cout << "Su pizza es vegetariana y lleva tomate, mozzarella y Tofu" << endl;
                break;
            case 2:
                cout << "Su pizza es vegetariana y lleva tomate, mozzarella y Pimientos" << endl;
                break;
            default:
                cout << "No ingreso un ingrediente valido" << endl;
            }
        }
        else
        {
            cout << "Ingrese 1 ,2 o 3 segun el ingrediente que desee" << endl;
            cout << "1) Peperoni \n2) Jamon\n3) Salmon" << endl;
            cin >> ig;
            switch (ig)
            {
            case 1:
                cout << "Su pizza NO es vegetariana y lleva tomate, mozzarella y Peperoni" << endl;
                break;
            case 2:
                cout << "Su pizza NO es vegetariana y lleva tomate, mozzarella y Jamon" << endl;
                break;
            case 3:
                cout << "Su pizza NO es vegetariana y lleva tomate, mozzarella y Salmon" << endl;
                break;
            default:
                cout << "No ingreso un ingrediente valido" << endl;
                break;
            }
        }
        cout << "Desea pedir otra pizza?(y/n)" << endl;
        cin >> op;
    } while (op == 'y');

    return 0;
}
```  
---
## 05_Temperaturas

*It indicates the highest and the lower temperature of 6 inputs*  
**Execution**  
*6 random temperatures*  
![Pizzeria](/U2/Imagenes/Temperaturas.png ) 
**Code**
```
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
    float t, sum=0, max=-100, min=100;
    for (int i = 0; i < 6; i++)
    {
        cout<<"Ingrese la temperatura: "<<i+1<<endl;
        cin>>t;
        sum=sum+t;
        if (min>t)
        {
            min=t;
        }
        if (max<t)
        {
            max=t;
        }
    }
    cout<<"El promedio de las temperaturas es: "<<sum/6<<" ºC"<<endl;
    cout<<"La temperatura minima es: "<<min<<" ºC"<<endl;
    cout<<"La temperatura maxima es: "<<max<<" ºC"<<endl;
    return 0;
}
```  
---
## 06_Factura

*It calculates the total of different quantities of products and prices*  
**Execution**  
*Random products and prices*  
![Factura](/U2/Imagenes/Factura.png ) 
**Code**
```
/*
    Unidad 2 - ejercicio 5
    Autor: María Delfina Deserti
    Fecha: 09/10/2022
    Descripción: Se ingresa cantidad de productos y su precio y se calcula el total de todos
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
```
---
## 07_Convert

*Binary input , decimal output*  
**Execution**  
*Binary= 1010*  
![Convert](/U2/Imagenes/Convert01.png ) 
**Code**
```