/**
 * Crea un fichero de texto, llamado notasNombre.txt, que contenga los datos incluidos en la siguiente tabla: 
 * la nota (dato real) y el nombre del alumno (string). 
 * Solo se consideran nombres SIN espacios y sin apellidos. Se utiliza el entero 0 como centinela. 
 * Agregando dificultad, pondremos cuantos alumnos hay en nuestra clase
 * */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream archivo;

    double notaAlumno;
    string nombreAlumno;
    int contador = 0;

    archivo.open("notasNombre.txt");
    if(archivo.is_open()){
        archivo >> notaAlumno;

        while (notaAlumno != 0)
        {
            archivo >> nombreAlumno;
            contador++;
            cout << nombreAlumno << "  Nota: " << notaAlumno << endl;

            archivo >> notaAlumno;
        }

        cout << "Total de alumnos: " << contador << endl;

        archivo.close();
    }else{
        cout << "Error al leer el archivo.txt" << endl;
        return 1;
    }


    return 0;
}