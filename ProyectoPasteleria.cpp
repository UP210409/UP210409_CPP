#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string.h>
//#include <stdafx.h>
using namespace std;
#define F 6
#define C 2

// - - - - - - - - I M P R I M I R - - - - - - - -
void Imprimir(float mat[F][C], string sabor[F])
{
    int n = 0;
    while (!sabor[n].empty() && n <= F)
    {
        int c = 0;
        cout << n << ") ";
        cout << mat[n][c] << "   $ ";
        c++;
        cout << mat[n][c] << "   ";
        cout << sabor[n] << endl;
        n++;
    }
}

//     M  E  N  U
char Menu(char menu)
{
    cout << "  - - - - - - M E N U - - - - - - - " << endl;
    cout << "Seleccione la letra que corresponda: " << endl;
    cout << "A) Imprimir inventario" << endl;
    cout << "B) Cargar productos nuevos" << endl;
    cout << "C) Realizar una venta" << endl;
    cout << "D) Imprimir ventas realizadas" << endl;
    cout << "E) Terminar día de trabajo y cerrar la caja" << endl;
    cin >> menu;
    return menu;
}

//
void AddSabExistente(float mat[F][C], string sabor[F])
{
    int possab, cantnew;
    cout << "Ingrese la posicion del sabor al que le deseas agregar stock" << endl;
    cin >> possab;
    if (possab >= 0 && possab <= F)
    {
        cout << "Ingrese la cantidad del sabor " << sabor[possab] << " que desea agregar" << endl;
        cin >> cantnew;
        cantnew = mat[possab][0] + cantnew;
        mat[possab][0] = cantnew;
        cout << "Ahora la cant total de " << sabor[possab] << " es de: " << mat[possab][0] << endl;
    }
    else
    {
        cout << "Superó el valor límite de sabores o ingresó un valor erroneo" << endl;
    }
}

// PRODUCTOS NUEVOS
void ProdNuevos(float mat[F][C], string sabor[F])
{
    char op;
    string newsab;
    Imprimir(mat, sabor);
    cout << "Si desea agregar un sabor nuevo ingrese Y, si quiere agregar stock a un sabor existente ingrese n. (y/n)" << endl;
    cin >> op;
    if (op == 'y' || op == 'Y')
    {
        do
        {
            bool flag = true;
            cout << "Ingrese el nuevo sabor" << endl;
            cin >> newsab;
            int n = 0;
            while (flag && n <= F)
            {
                if (sabor[n].empty())
                {
                    flag = false;
                    int newcan, newpre;
                    sabor[n] = newsab;
                    cout << "Cuantos productos desea agregar de " << newsab << " ?" << endl;
                    cin >> newcan;
                    mat[n][0] = newcan;
                    cout << "Ingrese el precio de " << newsab << endl;
                    cin >> newpre;
                    mat[n][1] = newpre;
                }
                else
                {
                    n++;
                    if (n > F)
                    {
                        cout << "Ya no puede ingresar un nuevo sabor, la cantidad supero su limite" << endl;
                    }
                }
            }

            cout << "Desea ingresar otro nuevo sabor? y/n" << endl;
            cin >> newsab;
        } while (newsab == "y");
    }
    else
    {
        do
        {
            AddSabExistente(mat, sabor);
            cout << "Desea actualizar otra cantidad? y/n" << endl;
            cin >> newsab;
        } while (newsab == "y");
    }
}

void Venta(float mat[F][C], string sabor[F], float Ventas[F][C], string saborvend[F][C], int &cantven, string tipo) // pasar el tipo de producto para guardarla en la matriz sabor
{
    int possab;
    char op;
    Imprimir(mat, sabor);
    cout << "Ingrese la posicion del sabor que desea vender." << endl;
    cin >> possab;

    if (possab >= 0 && possab <= F)
    {
        int cantArt;
        cout << "¿Cuantos productos del sabor " << sabor[possab] << " desea vender?" << endl;
        cin >> cantArt;
        if (mat[possab][0] >= cantArt)
        {
            cantven++;
            /*switch (tipo)
                {
                case "1":
                    cout<<"Pasteles"<<endl;
                    break;
                case "2":
                    cout<<"Postres"<<endl;
                    break;
                case
                default:
                    break;
                }
            */
            saborvend[cantven-1][0] = sabor[possab];
            saborvend[cantven-1][1] = tipo;
            mat[possab][0] = mat[possab][0] - cantArt;
            Ventas[cantven-1][0] = cantArt;
            Ventas[cantven-1][1] = mat[possab][1] * cantArt;
        }
        else
        {
            cout << "No se puede realizar la venta, no hay productos suficientes del sabor " << sabor[possab] << endl;
        }
    }
    else
    {
        cout << "Ingresó un valor erroneo de posicion" << endl;
    }
}

void IngTotal(float ventas[F][C], )
{
    
}

//  . . . . . . . M A I N . . . . . . . . .
int main()
{
    // VARIABLES
    string saborpas[F], saborpos[F], saborpan[F], saborgalle[F];
    float matpas[F][C], matpos[F][C], matpan[F][C], matgalle[F][C]; // cant - precio
    char menu;
    // ASIGNAR ARCHIVOS
    ifstream pasteles("/home/delfi/UP210409_CPP/Pasteles.txt");
    ifstream postres("/home/delfi/UP210409_CPP/Postres.txt");
    ifstream panes("/home/delfi/UP210409_CPP/Panes.txt");
    ifstream galletas("/home/delfi/UP210409_CPP/Galletas.txt");
    cout << "Archivos cargados. . ." << endl;
    int f = 0, c = 0;

    if (!pasteles.is_open())
    {
        cout << "no jala" << endl;
        exit(EXIT_FAILURE);
    }
    // CARGAR INVENTARIO DE PASTELES
    while (!pasteles.eof())
    {
        pasteles >> saborpas[f];
        pasteles >> matpas[f][c]; // cantidad
        c++;
        pasteles >> matpas[f][c]; // precio
        f++;
        c--;
    }
    f = 0;
    c = 0;
    // CARGAR INVENTARIO DE POSTRES
    while (!postres.eof())
    {
        postres >> saborpos[f];
        postres >> matpos[f][c]; // cantidad
        c++;
        postres >> matpos[f][c]; // precio
        f++;
        c--;
    }
    f = 0;
    c = 0;
    // CARGAR INVENTARIO DE PANES
    while (!panes.eof())
    {
        panes >> saborpan[f];
        panes >> matpan[f][c]; // cantidad
        c++;
        panes >> matpan[f][c]; // precio
        f++;
        c--;
    }
    f = 0;
    c = 0;
    // CARGAR INVENTARIO DE GALLETAS
    while (!galletas.eof())
    {
        galletas >> saborgalle[f];
        galletas >> matgalle[f][c]; // cantidad
        c++;
        galletas >> matgalle[f][c]; // precio
        f++;
        c--;
    }
    // inicialización de ventas
    float ventas[F][C];     // cantidad de artículos vendidos - total de la venta
    string saborvend[F][C]; // sabor y tipo
    int cantven = 0;
    // MENU
    do
    {
        menu = Menu(menu);
        switch (menu)
        {
        case 'a': // IMPRIMIR INVENTARIO
            cout << "Pasteles:" << endl;
            Imprimir(matpas, saborpas);
            cout << "Postres: " << endl;
            Imprimir(matpos, saborpos);
            cout << "Panes: " << endl;
            Imprimir(matpan, saborpan);
            cout << "Galletas: " << endl;
            Imprimir(matgalle, saborgalle);
            break;
        case 'b': // PRODUCTOS NUEVOS
            char tipoprod;
            do
            {
                cout << "¿Que producto desea agregar? Ingrese el numero correspondiente" << endl;
                cout << "1) Pastel \n2) Postre \n3) Panes \n4) Galletas \n0) Ingrese 0 para finalizar" << endl;
                cin >> tipoprod;
                switch (tipoprod)
                {
                case '1':
                    ProdNuevos(matpas, saborpas);
                    break;
                case '2':
                    ProdNuevos(matpos, saborpos);
                    break;
                case '3':
                    ProdNuevos(matpan, saborpan);
                    break;
                case '4':
                    ProdNuevos(matgalle, saborgalle);
                    break;
                case '0':
                    cout << "Guardando los cambios . . ." << endl;
                    sleep(4);
                    break;
                default:
                    break;
                }
            } while (tipoprod == '0');
            break;
        case 'c': // REALIZAR UNA VENTA
            char tipoven;
            do
            {
                cout << "¿Que producto desea vender? Ingrese el numero correspondiente" << endl;
                cout << "1) Pastel \n2) Postre \n3) Panes \n4) Galletas \n"
                     << endl;
                cin >> tipoven;
                switch (tipoven)
                {
                case '1':
                    Venta(matpas, saborpas, ventas, saborvend, cantven, "pasteles");
                    break;
                case '2':
                    Venta(matpos, saborpos, ventas, saborvend, cantven, "Postre");
                    break;
                case '3':
                    Venta(matpan, saborpan, ventas, saborvend, cantven, "Panes");
                    break;
                case '4':
                    Venta(matgalle, saborgalle, ventas, saborvend, cantven, "Galletas");
                    break;
                default:
                    break;
                }
                cout << "Desea realizar otra venta? y/n" << endl;
                cin >> tipoven;

            } while (tipoven == 'y' || tipoven == 'Y');
            break;

        case 'd': // IMPRIMIR VENTAS REALIZADAS
        {
            cout << "Las ventas realizadas hasta ahora son las siguientes: " << endl;
            int n = 0;
            cout<< "   Tipo   -     Sabor     -   Cantidad  - Ingreso  "<<endl;
            while (!saborvend[n][0].empty() && n <= F)
            {
                int c = 0;
                cout << n << ") ";
                cout << saborvend[n][1] << "   ";
                cout << saborvend[n][0] << "   ";
                cout << ventas[n][c] << "   $ ";
                c++;
                cout << ventas[n][c] << "   "<<endl;
                n++;
            }
            IngTotal(Ventas[F][C]);
        }
            break;
        //case 'e': // SALIR Y GUARDAR ARCHIVOS
            // cout << "E" << endl;
         //   break;
       // default:
        //    break;
        }

    } while (menu != ('E' || 'e'));

    // CERRAR TODOS LOS ARCHIVOS
    pasteles.close();
    postres.close();
    panes.close();
    galletas.close();

    system("pause");

    return 0;
}