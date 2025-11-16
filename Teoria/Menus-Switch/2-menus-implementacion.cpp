/**
 * Escribe un programa que muestre el siguiente menú en pantalla.
 *  Si el usuario teclea el carácter 1, se mostrará el mensaje "Quieres realizar la búsqueda de alumnos con nombre Juan".
 *  Si teclea el carácter 2, mostrará " Quieres realizar la búsqueda de alumnos con apellido Gomez ".
 *  Si teclea el carácter 3 finalizará el programa.
 *  Cualquier otro valor genera un mensaje de error.
 * El proceso se repetirá hasta que se teclee la opción de Salir.
 * Utiliza la sentencia switch.
 *
 * Este programa solo muestra el menú y visualiza un mensaje según la opción seleccionada.
 * Se debe controlar que la opción (carácter) se lea dentro del rango [1..3].
 * Cualquier otro valor genera un mensaje de error, como se muestra en la figura.
 *
 * Modifica el programa del apartado G para que además de informar con los mensajes se hagan esas búsquedas.
 * Reutiliza el código del apartado F. Intenta no repetir código.
 * Un ejemplo de ejecución se muestra en la siguiente figura.
 *
 * Tips:  Recuerda que se pueden usar funciones para no repetir código.
 * Por ejemplo, una función que devuelva la posición que se calcula con la función find() y que reciba el nombre del
 * fichero y el string a buscar (“Juan” ó “Gómez”)
 *
 * int buscarEnFichero(string nombreFichero, string BUSCAR);  // Prototipo
 */

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int menu();
int buscarEnFichero(string nombreFichero, string BUSCAR); // prototipo

int main()
{
    string nombreFichero = "grupos.txt";
    string BUSCAR;

    int opcion;
    opcion = menu();
    while (opcion != 3)
    {
        switch (opcion)
        {
        case 1:
            cout << "Usted ha elegido la opcion " << opcion << ". Buscar alumnos con nombre Juan" << endl;
            BUSCAR = "Juan";
            buscarEnFichero(nombreFichero, BUSCAR);
            break;
        case 2:
            cout << "Usted ha elegido la opcion " << opcion << ". Buscar alumnos con apellido Gómez" << endl;
            BUSCAR = "Gomez";
            buscarEnFichero(nombreFichero, BUSCAR);
            break;
        }
    opcion = menu();
    }
    cout << "\nUsted ha elegido la opcion: " << opcion << endl << "\tsaliendo del programa...";
}

int menu()
{
    int opcionWhile = -1;
    while ((opcionWhile < 1) || (opcionWhile > 3))
    {
        cout << "\nMENU para elegir la busqueda en el listado de alumnos de la clase" << endl;
        cout << "\t1. Buscar alumnos con nombre Juan." << endl;
        cout << "\t2. Buscar alumnos con apellido Gomez." << endl;
        cout << "\t3. Salir del programa." << endl;
        cout << "\tEscribe el numero de la opcion: ";
        cin >> opcionWhile;

        if ((opcionWhile < 1) || (opcionWhile > 3))
        {
            cout << "Opcion no valida, por favor ingrese un numero dentro del siguiente intervalo: [1,3]";
        }
    }
    return opcionWhile;
}

int buscarEnFichero(string nombreFichero, string BUSCAR)
{
    ifstream archivo;
    int grupo, contador = 0;
    string nombre1, nombre2;

    archivo.open(nombreFichero);

    if (archivo.is_open())
    {
        archivo >> grupo;
        archivo.ignore(1000, '\n');
        while (grupo != 0)
        {
            getline(archivo, nombre1);
            getline(archivo, nombre2);

            if (nombre1.find(BUSCAR) != -1)
            {
                contador++;
            }
            if (nombre2.find(BUSCAR) != -1)
            {
                contador++;
            }

            cout << "Grupo : " << grupo << endl
            << "\tAlumno 1: " << nombre1 << endl
            << "\tAlumno 2: " << nombre2 << endl;

            archivo >> grupo;
            archivo.ignore(1000, '\n');
        }
        if (BUSCAR == "Juan")
        {
            cout << "En esta clase hay " << contador << " alumnos con nombre " << BUSCAR << endl;
        }
        else if (BUSCAR == "Gomez")
        {
            cout << "En esta clase hay " << contador << " alumnos con apellido " << BUSCAR << endl;
        }
    }
    else
    {
        cout << "ERROR al abrir el archivo.txt" << endl;
        return 1;
    }
    return 0;
}