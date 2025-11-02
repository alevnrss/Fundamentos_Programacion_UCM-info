#include <iostream>
using namespace std;

bool bisiesto(int mes, int anio);

int main() {
   int mes, anio, dias;
   
   cout << "Número de mes: "; 
   cin >> mes;
   cout << "Año: "; 
   cin >> anio;
   
   if (mes == 2) {
      if (bisiesto(mes, anio)) {
         dias = 29;
      }
      else {
         dias = 28;
      }
   }
   else {
      if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7)
          || (mes == 8) || (mes == 10) || (mes == 12)) {
         dias = 31;
      }
      else {
         dias = 30;
      }
   }
   
   cout << "Días de ese mes: " << dias;
   
   return 0;
}

bool bisiesto(int mes, int anio) {
   bool esBisiesto;
   
   if ((anio % 4) == 0) { // Divisible por 4
      if (((anio % 100) == 0) && ((anio % 400) != 0)) {
         // Pero último de siglo y no múltiplo de 400
         esBisiesto = false;
      }
      else {
         esBisiesto = true; // Año bisiesto
      }
   }
   else {
      esBisiesto = false;
   }
   
   return esBisiesto;
}
