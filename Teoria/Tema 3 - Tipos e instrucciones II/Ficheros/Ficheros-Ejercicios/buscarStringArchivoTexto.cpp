/**
 * Crea un fichero de texto, llamado grupos.txt, que contenga los datos incluidos en la siguiente tabla, 
 * donde el entero representa el número del grupo y las dos líneas siguientes contienen el nombre de los 2 
 * integrantes de cada grupo.  Se utiliza el entero 0 como centinela.  Escribe un programa que permita leer 
 * el contenido de este fichero, muestre los datos en pantalla, según el siguiente formato, y 
 * calcule el número de alumnos con el substring “Juan” en su nombre. Cada línea se lee en un único string 
 * (no se separa el nombre en un string y el apellido en otro).  
 * 
 * En el código, utiliza la constante  const string BUSCA = "Juan";
 * 
 * Recuerda que: 
 *  La función find() para strings permite buscar la 1ª ocurrencia de una subcadena 
 * dentro de una cadena de texto o string.  Ejemplo:     string texto = “Hola mundo”;  cout << texto.find (“mundo”);  
 * mostrará el valor 5, que es la posición en la que comienza la palabra mundo (empezando a contar desde cero) en este texto. 
 * Si la subcadena fuese “adios” (no se encuentra en el string texto), entonces la función devuelve el valor -1.  
 * 
 *  Con cout se puede usar el carácter especial ‘\t’ para incluir tabuladores en el formato de salida. 
 * 
 *  Para descartar caracteres se puede usar la función ignore. Ejemplo: cin.ignore(1000, '\n'); 
 * en una lectura por teclado, descarta hasta 1000 caracteres o hasta encontrar un salto de línea (‘\n’), 
 * lo que ocurra primero.  
 */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
const string BUSCA = "Juan";
ifstream archivo;

int grupo, contador = 0;
string nombre1, nombre2;


archivo.open("grupos.txt");
if(archivo.is_open()){
    archivo >> grupo;
    archivo.ignore(1000,'\n' );
    while (grupo != 0)
    {
        getline(archivo, nombre1);
        getline(archivo, nombre2);

        if(nombre1.find(BUSCA) != -1){
            contador ++;
        }
        if(nombre2.find(BUSCA) != -1){
            contador++;
        }
        
        cout << "Grupo: " << grupo
        << "\n\tAlumno 1: " << nombre1
        << "\n\tAlumnos 2: " << nombre2 << "\n";

        archivo >> grupo;
        archivo.ignore(1000,'\n' );
    }
    cout << "\nResultados: " <<
    "\n\tEn esta clase hay " << contador << " alumnos con el nombre Juan.";
    
}else{
    cout << "Error al abrir el archivo.txt" << endl;
    return 1;
}
    return 0;
}