#include <iostream>
using namespace std;

int main() {
   double x, y, f;
   cout << "Valor de X: ";
   cin >> x;
   cout << "Valor de Y: ";
   cin >> y;
   f = 2 * pow(x, 5) + sqrt(pow(x, 3) / pow(y, 2)) 
         / abs(x * y) – cos(y);
   cout << "f(x, y) = " << f << endl;

   return 0;
}
