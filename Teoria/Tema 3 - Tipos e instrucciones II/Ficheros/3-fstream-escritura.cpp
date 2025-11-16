/**
 * Aqui simplemente usaremos ofstream para poder crear un archivo de texto y poder escribir en el
 * Pasos:
 *  1- Declaramos variable de tipo ofstream 
 *  2- Asociamos la variable con el archivo de texto (Creamos el archivo.txt)
 *  3- Realizar estructuras por medio de << (insertor)
 *  4- Cerrar el archivo
 * 
 * Es importante saber que si el archivo que hemos creado ya existe, se borra todo lo que 
 * hubiera en ese archivo.
 * Tambien si no cerramos el archivo se puede perder informacion.
 * 
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream archivo;
    string nif, producto;
    int unidades;
    double precio;
    char aux;


    archivo.open("output.txt"); // Creamos el archivo, o abrimos si es que ya lo hemos creado anteriormente

    cout << "NIF del producto (x para terminar): ";
    cin >> nif;
    while(nif != "x"){
        cin.get(aux);
        cout << "Producto: ";
        getline(cin, producto); // aqui utilizamos getline porque puede ser un nombre con espacios (reproductor_dvd)
        cout << "Unidades: ";
        cin >> unidades;    // Esto deja el espacio en el buffer por lo que si ponemos un espacio, el siguiente cin lo cogera como valor.
        cout << "Precio: ";
        cin >> precio;
        // Escribimos los datos en una línea del archivo...
        // Con un espacio de separación entre ellos
        archivo << nif << " " << unidades << " "
         << precio << " " << producto << endl;
        cout << "NIF del cliente (X para terminar): ";
        cin >> nif;
    }
    archivo << "x"; // Al final ponemos el centinela porque nos puede servir para despues leer.
    archivo.close(); // Cierre del archivo


    return 0;
}