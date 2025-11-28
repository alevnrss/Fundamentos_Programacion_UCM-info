/**
 * A continuacion se mostrara un ejemplo de la combinacion entre arrays y enumerados.
 * En este caso, este ejercicio sera de tipo:
 *
 * ENUMERADO COMO INDICE DEL ARRAY.
 *
 * En este caso indicaremos las horas trabajadas durante la semana, donde el enumerado sera el indice del array
 * ya que como sabemos, sus valores no son int como tal pero actuan como enteros.
 *
 */
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 7; // En total hay 7 dias

typedef enum
{
    lunes,
    martes,
    miercoles,
    jueves,
    viernes,
    sabado,
    domingo
} tDiasSemana;

typedef int tHorasTrabajadasArray[MAX];

string toString(tDiasSemana diaSemana);
void visualizarHoras_Trabajadas(tHorasTrabajadasArray horas_trabajadas);

int main()
{

    tHorasTrabajadasArray horas_trabajadas = {8, 5, 3, 12, 7, 9, 5}; // definimos el array segun la posicion de los dias. Lunes 8 horas, martes 5 horas, etc...

    cout << "Las horas trabajadas el Lunes son : " << horas_trabajadas[lunes]<< endl;
    cout << "Las horas trabajadas el martes son : " << horas_trabajadas[martes]<< endl;

    cout << "A continuacion se van a mostrar un resumen del total de horas trabajadas en toda la semana: " << endl;
    visualizarHoras_Trabajadas(horas_trabajadas);

    return 0;
}

string toString(tDiasSemana diaSemana)
{
    string cadena;
    switch (diaSemana)
    {
    case lunes:
        cadena = "Lunes";
        break;
    case martes:
        cadena = "Martes";
        break;
    case miercoles:
        cadena = "Miercoles";
        break;
    case jueves:
        cadena = "Jueves";
        break;
    case viernes:
        cadena = "Viernes";
        break;
    case sabado:
        cadena = "Sabado";
        break;
    case domingo:
        cadena = "Domingo";
        break;
    default:
        cadena = "No Existe";
        break;
    }
    return cadena;
}
void visualizarHoras_Trabajadas(tHorasTrabajadasArray horas_trabajadas){
    for(int i = lunes; i < MAX; i++){
        cout << "\tHe trabajado " << horas_trabajadas[i] << " horas, el dia " << toString(tDiasSemana(i)) << endl;
    }

    // Aqui en tDiasSemana(i) el valor de i como podemos comprobar se trata de un entero que proviene del propio array de horas
    // El valor de i se trata de la posicion de los valores del array. el array tiene de 0 a 6 posiciones. Entonces si i es lunes, es 0
    // cuyo indice del array es el primer valor. Finalmente lo transformamos cogiendo ese valor del indice. 
}