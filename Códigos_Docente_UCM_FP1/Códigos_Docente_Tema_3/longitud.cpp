#include <iostream>
using namespace std;

int longitud();

int main()
{
   cout << "Longitud = " << longitud() << endl;

   return 0;
}

int longitud() {
   int l = 0;
   char c;
   cout << "Texto terminado en punto: ";
   cin >> c;          // Obtener primer carácter
   while (c != '.') { // Mientras no el centinela
      l++;         // Procesar
      cin >> c;       // Obtener siguiente carácter
   }
   return l;
}
