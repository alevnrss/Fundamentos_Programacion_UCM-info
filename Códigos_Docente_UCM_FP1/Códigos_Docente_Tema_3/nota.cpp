#include <iostream>
using namespace std;

int main()
{
   int nota;
   cout << "Introduce la nota: ";
   cin >> nota;
   if (nota == 10) {
      cout << "MH";
   }
   else if (nota >= 9) {
      cout << "SB";
   }
   else if (nota >= 7) {
      cout << "NT";
   }
   else if (nota >= 5) {
      cout << "AP";
   }
   else {
      cout << "SS";
   }
  
   return 0;
}
