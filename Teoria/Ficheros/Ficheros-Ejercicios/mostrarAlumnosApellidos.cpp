/**
 * Modifica el programa anterior teniendo en cuenta que ahora el fichero 
 * contiene el nombre completo del alumno (en un string), además de la nota. 
 * El nombre puede ser compuesto. Se mantiene el 0 como valor centinela.  
 */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ifstream archivo;
    int contador = 0;
    double notaAlumno;
    string nombreAlumno;

    archivo.open("notasNombreApellido.txt");

    if(archivo.is_open())
    {
        archivo >>  notaAlumno; 
        archivo.ignore();
        while(notaAlumno != 0){
            getline(archivo, nombreAlumno);  // usamos getline() entonces usaremos .ignore()
            contador++;

            // uso de setw para el formato del cout
            cout << left << setw(40) << nombreAlumno 
            << "   Nota: " << notaAlumno << endl;

            archivo >> notaAlumno;
            archivo.ignore();
        }

        cout << "Total de Alumnos: " << contador << endl;
        archivo.close();
    }else{
        cout << "ERROR al abrir el archivo.txt" << endl;
        return 1;
    }


    return 0;
}