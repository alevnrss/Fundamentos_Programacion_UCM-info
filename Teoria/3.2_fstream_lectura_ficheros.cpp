
/**
 * LECTURA DE FICHEROS DE TEXTO Parte 2 (mejorada). archivo.ignore(1000, '\n')
 * 
 * En este ejercicio se dara la estructura que debera tener nuestro programa para poder leer un archivo txt.
 * En este caso lo que hemos hecho es leer un archivo de texto que contiene grupos de alumnos.
 * 
 * Se da la utilizacion del centinela (VALOR IMPORTANTE)
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream archivo;   // creamos el objeto que puede leer archivos.txt

int main(){
    archivo.open("fichero1.txt");       // abrimos ese archivo.txt
    
    if(archivo.is_open()){              // comprobamos si se abrió el archivo.txt, si no lo ha hecho va al else directamente
        cout << "archivo de texto abierto con exito" << endl;

        int grupo;                      // variable que guardara el numero del grupo de los alumnos 
        string nombre1, nombre2;        // variable que guardara el nombre de cada alumno del grupo seleccionado

        archivo >> grupo;               // leemos lo primero de nuestro archivo.txt
        archivo.ignore(1000, '\n');     // IMPORTANTE: si no lo ponemos el salto de linea no se consume y sera variable vacia.

        while(grupo!=0){                // Bucle para leer lo de dentro de cada grupo, mientras que no sea el valor del centinela
            getline(archivo,nombre1);   // Leemos lineas completas del archivo y la guardamos en dichas variables
            getline(archivo, nombre2);

            cout << "Grupo: " << grupo << endl;
            cout << "  Alumno 1: " << nombre1 << endl;
            cout << "  Alumno 2:" << nombre2 << endl;

            archivo >> grupo;           // leemos el siguiente numero 
            archivo.ignore(1000, '\n'); // IMPORTANTE: si no lo ponemos el salto de linea no se consume y sera variable vacia.
        }
        cout << "Fin de la lectura, centinela encontrado " << grupo << endl;

        archivo.close();                // cerramos el archivo, siempre despues de usarlos.
    }else{
        cout << "Error al abrir el archivo de texto";
        return 1;
    }
    return 0;
}
