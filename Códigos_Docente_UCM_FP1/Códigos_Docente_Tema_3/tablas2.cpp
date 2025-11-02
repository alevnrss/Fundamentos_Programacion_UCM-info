#include <iostream>
using namespace std;
#include <iomanip>

int main() {
   for (int i = 1; i <= 10; i++) {
      cout << "Tabla del " << i << endl;
      cout << "--------------" << endl;
      for (int j = 1; j <= 10; j++) {
         cout << setw(2) << i << " x "
            << setw(2) << j << " = "
            << setw(3) << i * j << endl;
      }
      cout << endl;
   }

   return 0;
}
