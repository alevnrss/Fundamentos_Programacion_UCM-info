#include <iostream>
using namespace std;

int main() {
   int op1 = 13, op2 = 4;
   int opcion;
   cout << "1 - Sumar" << endl;
   cout << "2 - Restar" << endl;
   cout << "Opción: ";
   cin >> opcion;
   if (opcion == 1) {
      cout << op1 + op2 << endl;
   }
   else {
      cout << op1 - op2 << endl;
   }
   return 0;
}
