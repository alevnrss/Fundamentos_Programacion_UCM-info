/**
 * Crea un fichero de texto, llamado temperaturas.txt, que contenga los siguientes datos, 
 * que representan las temperaturas de varios días del verano pasado. 
 * Crea un proyecto en Visual Studio y copia este fichero de texto en la carpeta del proyecto 
 * (aplicable a todos los restantes ejercicios de lectura de ficheros!). 
 * Usando el esquema de lectura de ficheros (pág 257 del Tema 3, versión PDF),  
 * crea un programa que permita leer los datos de este fichero y 
 * calcule la media de temperaturas. Usa como centinela el valor -1. 
 */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream archivo;

    double temperaturas, sumaTemperaturas = 0, mediaTemperaturas;
    char aux;
    int contador = 0;

    archivo.open("temperaturas.txt");
    if(archivo.is_open()){
        archivo >> temperaturas;

        while(temperaturas != -1){
            sumaTemperaturas += temperaturas;
            contador++;
            archivo.get(aux);   // no hace falta porque no usamos getline().
            archivo >> temperaturas;
        }

        mediaTemperaturas = sumaTemperaturas / contador;

        cout << "La media de temperaturas total es de: " << mediaTemperaturas;

        archivo.close();

    }else{
        cout << "Error al abrir el archivo.txt" << endl;
        return 1;
    }

    return 0;
}