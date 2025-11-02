#include <iostream>
using namespace std;

int main()
{
   int num;
   
   cout << "Introduce un número entre 1 y 10: ";
   cin >> num;
   if ((num >= 1) && (num <= 10)) {
      cout << "Número dentro del intervalo de valores válidos";
   }
   else {
      cout << "Número no válido";
   }

   return 0;
}
