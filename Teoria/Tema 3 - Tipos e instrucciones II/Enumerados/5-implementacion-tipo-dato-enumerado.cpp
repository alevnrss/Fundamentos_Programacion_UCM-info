/**
 * A continuacion, se mostrara una pequeña implementacion sobre los tipos de dato
 * enumerado.
 *
 * Es imporante saber que, si los tipos de dato enumerado que creemos, se vayan a usar en mas de una funcion,
 * entonces deberemos declararlos antes de los prototipos de funciones.
 *
 */

#include <iostream>
#include <string>
using namespace std;

typedef enum
{
    enero,
    febrero,
    marzo,
    abril,
    mayo,
    junio,
    julio,
    agosto,
    septiembre,
    octubre,
    noviembre,
    diciembre
} tMes;

typedef enum
{
    lunes,
    martes,
    miercoles,
    jueves,
    viernes,
    sabado,
    domingo
} tDiaSemana;

string cadMes(tMes mes);
string cadDia(tDiaSemana dia);

int main()
{
    tDiaSemana hoy = lunes;
    int dia = 21;
    tMes mes = enero;
    int anio = 2013;

    // A continuacion mostraremos la fecha

    cout << "Hoy es: " << cadDia(hoy) << " " << dia 
        << " de " << cadMes(mes) << " de " << anio
        << endl;

    cout << "Pasada la medianoche sera..." << endl;
    dia++;
    int i = int(hoy);   // necesitamos convertirlo a entero para poder sumarle.
    i++;        
    hoy = tDiaSemana(i);

    // Mostramos la fecha
   cout << "Mañana es: " << cadDia(hoy) << " " << dia 
        << " de " << cadMes(mes) << " de " << anio
        << endl;

    return 0;

}

string cadMes(tMes mes) {
   string cad;

   if (mes == enero) {
      cad = "enero";
   }
   if (mes == febrero) {
      cad = "febrero";
   }
   // ...
   if (mes == diciembre) {
      cad = "diciembre";
   }

   return cad;
}

string cadDia(tDiaSemana dia){
   string cad;

   if (dia == lunes) {
      cad = "lunes";
   }
   if (dia == martes) {
      cad = "martes";
   }
   if (dia == domingo) {
      cad = "domingo";
   }

   return cad;
}

