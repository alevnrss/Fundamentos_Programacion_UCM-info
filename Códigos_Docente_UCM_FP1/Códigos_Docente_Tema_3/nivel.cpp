#include <iostream>
using namespace std;

int main() {
   int num;
   
   cout << "Introduce el nivel: ";
   cin >> num;
   
   if (num == 4) {
      cout << "Muy alto" << endl;
   }
   else if (num == 3) {
      cout << "Alto" << endl;
   }
   else if (num == 2) {
      cout << "Medio" << endl;
   }
   else if (num == 1) {
      cout << "Bajo" << endl;
   }
   else {
      cout << "Valor no válido" << endl;
   }
   
   return 0;
}
