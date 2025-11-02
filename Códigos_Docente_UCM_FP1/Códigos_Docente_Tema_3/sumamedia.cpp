#include <iostream>
using namespace std;

int main()
{
   double num, suma = 0, media = 0;
   int cont = 0;
   
   cout << "Introduce un número (0 para terminar): ";
   cin >> num;
   
   while (num != 0) {
      suma = suma + num;
      cont++;
      cout << "Introduce un número (0 para terminar): ";
      cin >> num;
   }
   
   if (cont > 0) {
      media = suma / cont;
   }
   
   cout << "Suma = " << suma << endl;
   cout << "Media = " << media << endl;

   return 0;
}
