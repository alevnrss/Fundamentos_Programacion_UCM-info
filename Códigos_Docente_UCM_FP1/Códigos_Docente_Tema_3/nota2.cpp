#include <iostream>
using namespace std;

int main()
{
   int nota; // Sin decimales
   
   cout << "Nota (0-10): ";
   cin >> nota;
   
   switch (nota) {
   case  0:
   case  1:
   case  2:
   case  3:
   case  4:
      {
         cout << "Suspenso";
      }
      break; // De 0 a 4: SS
   case  5:
   case  6:
      {
         cout << "Aprobado";
      }
      break; // 5 o 6: AP
   case  7:
   case  8:
      {
         cout << "Notable";
      }
      break; // 7 u 8: NT
   case  9:
   case 10:
      {
         cout << "Sobresaliente";
      }
      break; // 9 o 10: SB
   default:
      {
         cout << "¡No válida!";
      }
   }
  
   return 0;
}
