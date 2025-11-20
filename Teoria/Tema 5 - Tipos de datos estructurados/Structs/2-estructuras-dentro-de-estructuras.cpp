/**
 * A continuacion se mostrara como podemos tener estructuras definidas por el usuario dentro de otras estructuras.
 * Esto es eficaz por ejemplo cuando queremos tener un struct que contenga valores de otras estructuras pero sin llenar el struct de variables.
 * 
 * Utilizaremos una estructura de datos de tipo persona para obtener sus datos, pero su NIF que tendra el DNI y letra sera obtenido aparte de la estructura de tipo persona.
 * 
 * Para acceder a un struct dentro de otro struct usaremos la notacion (variable.struct.propiedad). Es importante tener en cuenta que es una forma eficaz para no 
 * llenar struct por struct.
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Esta estructura se encontrara dentro de la estructura de tipo persona, ademas que llevara valores de DNI y letra.
// IMPORANTTE, esta estructura debe ser definida antes de la estructura de tipo persona porque sino da ERROR.
typedef struct {
    string dni;
    char letra;
}tNif;


typedef struct {
    string nombre;
    string apellidos;
    int edad;
    tNif nif;
}tPersona;


int main(){

    // instanciamos el struct de tipo persona
    tPersona persona;

    // Para poder asignarle valores a sus propiedades deberemos usar la notacion (variable.struct.propiedad) -> solo a esa variable que sea struct dentro del struct persona.
    persona.nombre = "Pepe";
    persona.apellidos = "Perez";
    persona.edad = 30;
    persona.nif.dni = "12345678";
    persona.nif.letra = 'A';

    cout << "\nInformacion de la persona: " << endl
    << "Nombre: " << persona.nombre << endl
    << "Apellidos: " << persona.apellidos << endl
    << "Edad: " << persona.edad << endl
    << "NIF: " << persona.nif.dni << persona.nif.letra << endl;

    // Si por ejemplo ahora queremos copiar toda la informacion de la persona a otra persona podemos hacer lo siguiente
    tPersona persona2;
    persona2 = persona;

    cout << "\nInformacion de la persona 2: " << endl
    << "Nombre: " << persona2.nombre << endl
    << "Apellidos: " << persona2.apellidos << endl
    << "Edad: " << persona2.edad << endl
    << "NIF: " << persona2.nif.dni << persona2.nif.letra << endl;

    return 0;
}