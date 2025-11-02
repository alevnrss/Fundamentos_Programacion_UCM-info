#include <iostream>
using namespace std;

int main()
{
  double x, f;
  cout << "Introduce el valor de X: ";
  cin >> x;
  f = 3 * x * x / 5 + 6 * x / 7 - 3;
  cout << "f(x) = " << f << endl;
  return 0;
}
