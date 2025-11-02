#include <iostream>
using namespace std;

int main()
{
   double d, num;
   bool encontrado = false;
   
   cout << "Encontrar primero mayor que: ";
   cin >> num;
   
   cout << "Siguiente (-1 para terminar): ";
   cin >> d; // Obtener el primer elemento
   while ((d != -1) && !encontrado) {
   // Mientras no sea el centinela y no se encuentre
      if (d > num) { // ¿Encontrado?
         encontrado = true;
      }
      else {
         cout << "Siguiente (-1 para terminar): ";
         cin >> d; // Obtener el siguiente elemento
      }
   }
   
   if (encontrado)
      cout << "Encontrado";
   else
      cout << "No encontrado";

   return 0;
}
