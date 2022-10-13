*UP210409*
![Unit2](/U2/Imagenes/U2.png ) 
# Table of Contents

* 01_Impuestos
* 02_Rendimiento
* 03_SalaDeJuegos
* 04_Pizzeria
* 05_Temperaturas
* 06_Factura
* 07_Convert
* /Imagenes  
---
### Class Excercises
* E01abc
* E02TablaPreg
* E03TablaForFor
* E04Tablas
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
*Binary= 00111001*  
![Convert](/U2/Imagenes/Convert02.png ) 
**Code**
```
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
```
---
---
# Class excercises codes  
## E01abc

```
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
```
---
## E02TablaPreg

```
/*
    Unidad 2 - Tablas con pregunta
    Autor: María Delfina Deserti
    Fecha: 06/10/2022
    Descripción: Muestra la tabla de multiplicar del numero ingresado cuantas veces quieras
*/

#include <iostream>
using namespace std;

int main()
{
    char op;
    int n;
    do
    {
        cout << "Ingrese un número" << endl;
        cin >>n;
        for (int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i << " = " <<(i*n)<< endl;
        }
        cout << "¿Desea obtener otra tabla de multiplicar?" << endl << "Ingrese s para Si, n para NO"<<endl;
        cin >>op;

    } while (op=='s');
    cout << "fin" << endl;
    
    return 0;
}
```
---
## E03TablaForFor

```
/*
    Unidad 2 - Todas las tablas del 1 al 10 - For For
    Autor: María Delfina Deserti
    Fecha: 06/10/2022
    Descripción: Muestra todas las tablas de multiplicar utilizando 2 for anidados
*/
#include <iostream>
using namespace std;

int main()
{

    //TODAS LAS TABLAS DE 1 A 10
    for (int i = 1; i <=10; i++)
    {
        cout << "Tabla del "<<i<<endl;
        for (int j = 1; j <=10; j++)
        {
            cout << i << " x " << j << " = " <<(i*j)<< endl;
        }
        cout<<endl;
    }
}
```
---
## E04Tablas

```
/*
    Unidad 2 - Tablas
    Autor: María Delfina Deserti
    Fecha: 04/10/2022
    Descripción: Muestra la tabla de multiplicar del numero ingresado
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un número" << endl;
    cin >>n;
    
    cout << "Tabla FOR ascendente" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
    }

    cout << endl << "Tabla FOR descendente" << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
    }

    cout << endl << "Tabla WHILE ascendente" << endl;
    int i=1;
    while ((i>=1) && (i<=10))
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i++;
    }
    i--;
    cout << endl << "Tabla WHILE descendente" << endl;
    while ((i<=10) && (i>=1))
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i--;
    }
    i++;
    cout << endl << "Tabla DO WHILE ascendente" << endl;
    do
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i++;

    } while (i<=10);
    i--;
    cout << endl << "Tabla DO WHILE descendente" << endl;
    do
    {
        cout << n << " x " << i << " = " <<(i*n)<< endl;
        i--;

    } while (i>=1);
    
    return 0;
}
```
---