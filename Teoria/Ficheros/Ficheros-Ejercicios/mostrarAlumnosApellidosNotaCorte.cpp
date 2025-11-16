/**
 * Ahora nos solicitan que solo se muestren el nombre completo y apellidos de aquellos alumnos
 * que tienen una nota igual o superior a 8 y que se haga un recuento de los
 * alumnos con nota menor de 8. La salida se muestra en la siguiente figura. Usa una constante NOTACORTE.
    para tabular \t y para dar espacios grandes entre lineas \n
 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ifstream file;

    const int CORTE = 8;
    string nombreAlumno;
    double notaAlumno;
    int contadorAlumnosInferior = 0, totalAlumnos = 0;

    file.open("notasNombreApellido.txt");

    if (file.is_open())
    {
        file >> notaAlumno;
        file.ignore();
        while (notaAlumno != 0)
        {
            getline(file, nombreAlumno); // importante siempre leer el nombre
            if (notaAlumno < 8)          
            {
                contadorAlumnosInferior++;
            }
            if (notaAlumno >= 8)
            {
                totalAlumnos++;
                cout << left << setw(40) << nombreAlumno
                     << "    Nota: " << notaAlumno << endl;
            }
            file >> notaAlumno;
            file.ignore();
        }
        
        cout << "\n\nEn esta clase hay un total de: " << totalAlumnos << " alumnos, donde " << contadorAlumnosInferior << " alumnos son de nota inferior a 8." << endl;
    }
    else
    {
        cout << "ERROR al abrir el archivo.txt" << endl;
        return 1;
    }

    return 0;
}