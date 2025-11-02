#include <iostream>
using namespace std;

int main()
{
   const double Pi = 3.141592;
   double radio = 12.2, circunferencia;
   circunferencia = 2 * Pi * radio;
   cout << "Circunferencia de un círculo de radio " 
        << radio << ": " << circunferencia << endl;

   const double Euler = 2.718281828459; // Número e
   cout << "Número e al cuadrado: " << Euler * Euler << endl;
   
   const int IVA = 18;
   int cantidad = 12;
   double precio = 39.95, neto, porIVA, total;
   neto = cantidad * precio;
   porIVA = neto * IVA / 100;
   total = neto + porIVA;
   cout << "Total compra: " << total << endl;

   return 0;
}
