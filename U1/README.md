*UP210409*

![U1](/U1/Imagenes/U1.png "U1")  
# Table of Contents  
*Click the link of the code*  

  - [01 Hola](#01-hola)
  - [02 ParImpar](#02-parimpar)
  - [03 TiposDatos](#03-tiposdatos)
  - [04 Ciclos](#04-ciclos)
  - [05 Edades](#05-edades)

---
## 01 Hola

*This code show the word "Hello"*  

**Code**
```
main(){
	cout<< "Hola" << endl;
	getchar();
	return(0);
}
```
**Execution**  
![Hola](/U1/Imagenes/Hola.png "Hola")

---
## 02 ParImpar

*This code show the message "Par e Impar"*  

**Code**
```
int main()
{
    cout <<  "Par o Impar" << endl;
    return 0;
}
```
**Execution**  
![ParImpar](/U1/Imagenes/ParImpar.png "ParImpar")  

---
## 03 TiposDatos

*It shows the different kind of datos in c++. You can appreciate the limits of storage of integer, float, double and char*  

**Code**
```
/*
    Unidad 1 - Tipos de Datos
    Autor: María Delfina Deserti
    Fecha: 15/09/2022
    Descripción: Muestra los diferentes tipos de datos en c++
*/

#include <iostream>
#include <stdio.h>
using namespace std;

//Variables Globales
#define PI 3.1416
const float pi=3.1415;

int main()
{
    int entero = -2147483647;
    float flotante = 3.4e38;
    double grande = 2.23859823578572;
    char caracter = '@';

    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El numero entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << " bytes" << endl;
    cout << "El caracter es: "<< caracter << endl;
    cout << "El tamaño del caracter es: " << sizeof(caracter) << " bytes." << endl;
    cout << "El valor de pi es: " << pi << endl;
    cout << "El valor de PI es: " << PI << endl;
    //getchar();

    return 0;
}
```
**Execution**  
![TipoDatos](/U1/Imagenes/TipoDatos.png "TipoDatos")

---
## 04 Ciclos

*It adds even and odd numbers with if. We learnt how IF works*   

**Code**
```
/*
    Unidad 1 - Ciclos
    Autor: María Delfina Deserti
    Fecha: 23/09/2022
    Descripción: Suma pares e impares con if
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int par = 0, impar = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 ==0)
        {
            par+=i;
        }else
            {
                impar+=i;
            }
    }
    printf("La suma es de impares es: %d \nLa suma de pares es: %d \n", impar, par);
    printf("La suma total es %d \n", impar+par);
    return 0;
}
```
**Execution**  
![Ciclos](/U1/Imagenes/Ciclos.png "Ciclos") 

---
## 05 Edades

*It shows a messagge depending on the age you input. We learnt how to use IF correctly*  

**Code**
```
/*
    Unidad 1 - Edades
    Autor: María Delfina Deserti
    Fecha: 23/09/2022
    Descripción: Muestra mensaje dependiendo la edad ingresada
*/

#include <iostream>
using namespace std;

int main()
{
    int e = 0;
    cout << "Ingrese una edad" << endl;
    cin >> e;
    do
    {
        if (e >= 1 && e <= 150)
        {
            if (e <= 30)
            {
                cout << "1ra edad" << endl;
            }
            else
            {
                if (e <= 60)
                {
                    cout << "2da edad" << endl;
                }
                else
                {
                    if (e <= 90)
                    {
                        cout << "3ra edad" << endl;
                    }
                    else
                    {
                        cout << "Horas extra" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "Eres marciano" << endl;
        }
        cout << "Ingrese una edad o 00 para finalizar" << endl;
        cin >> e;
    }while (e != 00);
    cout << "fin" << endl;
    return 0;
}
```
**Execution with all the possible options 15, 35, 62, 95 y 160**
![Ciclos](/U1/Imagenes/Edades.png "Ciclos")