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