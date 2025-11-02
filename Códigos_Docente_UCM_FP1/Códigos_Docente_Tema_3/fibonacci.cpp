#include <iostream>
using namespace std;

int main()
{
   int num, fib, fibMenos2 = 0, fibMenos1 = 1; // Primero y segundo
   
   fib = fibMenos2 + fibMenos1; // Empezamos calculando el tercero
   
   cout << "Hasta: ";
   cin >> num;
   
   if (num >= 1) { // Ha de ser entero positivo
      cout << "0 1 "; // Los dos primeros seguro que son <= num
      while (fib <= num) { // Mientras no sea mayor que num
         cout << fib << " ";
         fibMenos2 = fibMenos1; // Actualizamos los dos anteriores
         fibMenos1 = fib; // para obtener...
         fib = fibMenos2 + fibMenos1; // ... el siguiente Fibonacci
      }
   }

   return 0;
}
