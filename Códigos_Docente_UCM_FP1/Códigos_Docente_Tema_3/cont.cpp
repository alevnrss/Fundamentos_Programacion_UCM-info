#include <iostream>
using namespace std;

int main()
{
   char buscado, c;
   int cont = 0;
   
   cout << "Carácter a buscar: ";
   cin >> buscado;
   
   cout << "Cadena: ";
   cin >> c;
   
   while (c != '*') {
      if (c == buscado) {
         cont++;
      }
      cin >> c;
   }
   
   cout << buscado << " aparece " << cont << " veces.";

   return 0;
}
