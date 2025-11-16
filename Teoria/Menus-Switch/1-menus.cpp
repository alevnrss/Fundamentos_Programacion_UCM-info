/**
 * Estructura de un menu para trabajar con el.
 * Para ello necesitaremos del uso de dos bucles while
 *  - Uno de ellos ira dentro de la funcion menu, este lo que hara es que no nos dejara salir del menu hasta que no pongamos
 *    un numero correcto, cuando lo pongamos mandara dicha opcion al main o donde llamemos a la funcion,
 *  - El segundo while es segun lo que mandemos en el primer menu, en este caso para salir es un cero por lo que preguntaremos
 *    que siempre y cuando sea distinto a 0 se repita el pedir opcion de menu.
 */

#include <iostream>
#include <string>
using namespace std;

int menu();

int main()
{
    int opcion;

    opcion = menu();
    while (opcion != 0)
    {
        switch (opcion)
        {
        case 1:
            cout << "En la opcion 1 tenemos ..." << endl;
            break;

        case 2:
            cout << "En la opcion 2 tenemos ..." << endl;
            break;
        case 3:
            cout << "En la opcion 3 tenemos ..." << endl;
            break;
        case 4:
            cout << "En la opcion 4 tenemos ..." << endl;
            break;
        }
        opcion = menu();
    }
    cout << "Usted a elegido salir del programa";

    return 0;
}

/**
 * funcion menu.
 */
int menu()
{
    int op = -1; // garantizamos que se entre al bucle al menos una vez, lo ponemos mal con ese proposito.

    while ((op < 0) || (op > 4))    // saldra del bucle cuando no sea menor a 0 o mayor a 4
    {
        cout << "1 - Nuevo cliente" << endl;
        cout << "2 - Editar cliente" << endl;
        cout << "3 - Baja cliente" << endl;
        cout << "4 - Ver cliente" << endl;
        cout << "0 - Salir" << endl;
        cout << "Opcion: ";
        cin >> op;

        if ((op < 0) || (op > 4))
        {
            cout << "Opcion no valida" << endl;
        }

    }

    return op;
}