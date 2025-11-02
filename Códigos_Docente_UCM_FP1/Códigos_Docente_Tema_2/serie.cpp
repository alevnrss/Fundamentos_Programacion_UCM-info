#include <iostream>
using namespace std;

int main()
{
   int i = 1, n = 0, suma = 0;
   while (n <= 0) { // Sólo n positivo
      cout << "¿Cuántos números quieres sumar? ";
      cin >> n;
   }
   while (i <= n) {
      suma += i;
      i++;
   }
   cout << "Sumatorio de i (1 a " << n << ") = " << suma << endl;

   return 0;
}
