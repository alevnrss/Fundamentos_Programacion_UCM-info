/**
 * Como bien sabemos, para poder recorrer un array debemos dar uso de el bucle for().
 * 
 * A continuacion se hara un ejercicio simple donde tendremos que guardar la temperatura que hace en 
 * todo una semana y hacer la media de esa temperatura.
 * 
 * Ademas, dividiremos todo lo que se pueda hacer de arrays a traves de funciones definidas por el usuario.
 * Los arrays tambien deberan ser de tipo variables definidas por el usuario.
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Una semana esta compuesto por siete dias, por lo que el maximo de valores que guardara el array es de siete dias.
const int MAX = 7;

typedef float tTemperaturaSemana[MAX];

void inicializarArray(tTemperaturaSemana array);
float calcularMediaTemperaturas(tTemperaturaSemana array);

int main(){
    float mediaTemp;
    tTemperaturaSemana arrayTemperaturas;
    inicializarArray(arrayTemperaturas);
    mediaTemp = calcularMediaTemperaturas(arrayTemperaturas);

    cout << fixed << setprecision(2); // Fija el formato a 2 decimales
    cout << "La media de temperaturas de esta semana es: " << mediaTemp << endl;



    return 0;
}

void inicializarArray(tTemperaturaSemana array){
    for(int i = 0; i < MAX; i++){
        cout << "Introduzca el valor del dia " << i + 1 << endl;
        cin >> array[i] ;
        cin.ignore(100, '\n');  // Recordar siempre limpiar el buffer del cin por si se introduce una linea extra
    }
}   

float calcularMediaTemperaturas(tTemperaturaSemana array){
    float total = 0, media;

    for(int i = 0; i < MAX ; i++){
        total += array[i];
    }
    media = total/MAX;

    return media;
}