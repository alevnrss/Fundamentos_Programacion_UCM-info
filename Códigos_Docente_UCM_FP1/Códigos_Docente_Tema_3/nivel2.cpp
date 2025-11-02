#include <iostream>
using namespace std;

int main() {
   int num;
   
   cout << "Introduce nº de nivel: ";
   cin >> num;
   
   switch (num) {
   case 4:
      {
         cout << "Muy alto";
      }
      break;
   case 3:
      {
         cout << "Alto";
      }
      break;
   case 2:
      {
         cout << "Medio";
      }
      break;
   case 1:
      {
         cout << "Bajo";
      }
      break;
   default:
      {
         cout << "Valor no válido";
      }
   }
   
   return 0;
}
