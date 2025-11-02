#include <iostream>
using namespace std;

typedef enum { enero, febrero, marzo, abril, mayo,
   junio, julio, agosto, septiembre, octubre,
   noviembre, diciembre } tMes;

typedef enum { lunes, martes, miercoles, jueves,
   viernes, sabado, domingo } tDiaSemana;

string cadMes(tMes mes);
string cadDia(tDiaSemana dia);

int main() {
   tDiaSemana hoy = lunes;
   int dia = 21;
   tMes mes = octubre;
   int anio = 2013;
   
   // Mostramos la fecha
   cout << "Hoy es: " << cadDia(hoy) << " " << dia 
        << " de " << cadMes(mes) << " de " << anio
        << endl;

   cout << "Pasada la medianoche..." << endl;
   dia++;
   int i = int(hoy);
   i++;
   hoy = tDiaSemana(i);

   // Mostramos la fecha
   cout << "Hoy es: " << cadDia(hoy) << " " << dia 
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
   if (mes == marzo) {
      cad = "marzo";
   }
   if (mes == abril) {
      cad = "abril";
   }
   if (mes == mayo) {
      cad = "mayo";
   }
   if (mes == junio) {
      cad = "junio";
   }
   if (mes == julio) {
      cad = "julio";
   }
   if (mes == agosto) {
      cad = "agosto";
   }
   if (mes == septiembre) {
      cad = "septiembre";
   }
   if (mes == octubre) {
      cad = "octubre";
   }
   if (mes == noviembre) {
      cad = "noviembre";
   }
   if (mes == diciembre) {
      cad = "diciembre";
   }

   return cad;
}

string cadDia(tDiaSemana dia) {
   string cad;
   
   if (dia == lunes) {
      cad = "lunes";
   }
   if (dia == martes) {
      cad = "martes";
   }
   if (dia == miercoles) {
      cad = "miércoles";
   }
   if (dia == jueves) {
      cad = "jueves";
   }
   if (dia == viernes) {
      cad = "viernes";
   }
   if (dia == sabado) {
      cad = "sábado";
   }
   if (dia == domingo) {
      cad = "domingo";
   }
   
   return cad;
}
