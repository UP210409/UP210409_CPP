*Delfina Deserti*
# UNIDAD 1 

* 01_Hola
* 02_ParImpar
* 03_TiposDatos
* 04_Ciclos
* 05_Edades
* /Imagenes

---
entrada, proceso , salida
## 01_Hola

*This exercise show the word "Hello"*  
**Execution**
![Hola](/U1/Imagenes/Hola.png "Hola")

**Code**
```
main(){
	cout<< "Hola" << endl;
	getchar();
	return(0);
}
```
---
## 02_ParImpar

*This exercise show the message "Par e Impar"*  
**Execution**
![ParImpar](/U1/Imagenes/ParImpar.png "ParImpar")

**Code**
```
int main()
{
    cout <<  "Par o Impar" << endl;
    return 0;
}
```
---
## 03_TiposDatos

*Muestra los diferentes tipos de datos en c++*  
**Execution**
![TipoDatos](/U1/Imagenes/TipoDatos.png "TipoDatos")

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
---
## 04_Ciclos

*It adds even and odd numbers with if*  
**Execution**
![Ciclos](/U1/Imagenes/Ciclos.png "Ciclos")

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
---
## 05_Edades

*It shows a messagge depending on the age you input*  
**Execution**
![Ciclos](/U1/Imagenes/Ciclos.png "Ciclos")

**Code**
```