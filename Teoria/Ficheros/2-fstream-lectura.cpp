/**
 * Ahora trataremos de leer un archivo de texto que contiene productos con sus
 * NIF, CANTIDAD, PRECIO, NOMBRE DEL PRODUCTO.
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream archivo;

    const int IVA = 21;
    string NIF, nombreProducto;
    int cantidad;
    double precio, neto, total, iva;

    char aux;
    int contador = 0;


    archivo.open("productos.txt");  // ABRIMOS EL ARCHIVO  
    if(archivo.is_open()){  // COMPROBAMOS 
        cout << "Archivo abierto correctamente" << endl;
        archivo >> NIF;     // COGEMOS LO PRIMERO QUE HAY, Y CON ESO CONDICIONAMOS
        while(NIF != "x"){      // CONDICIONAMOS
            archivo >> cantidad >> precio;  // COGEMOS CON EXTRACTOR, SIEMPRE COGE HASTA EL ESPACIO
            archivo.get(aux);       // COGEMOS ESE ESPACIO QUE QUEDA PARA USAR GETLINE(), SINO DA ERROR 
            getline(archivo, nombreProducto);   // COGEMOS NOMBRE DEL PRODUCTO, TERMINAMOS DE COGER TODO
            contador++;     // YA HEMOS COGIDO TODO EL PRODUCTO, SUMAMOS.   
            neto = cantidad * precio;
            iva = neto * IVA / 100;
            total = neto + iva;

            cout << "Compra " << contador << ".-" << endl;
            cout << "   " << nombreProducto << ": " << cantidad << endl;


            archivo >> NIF;
        }
        archivo.close();

    }else{
        cout << "Error al abrir el archivo";
        return 1;
    }

    return 0;
}