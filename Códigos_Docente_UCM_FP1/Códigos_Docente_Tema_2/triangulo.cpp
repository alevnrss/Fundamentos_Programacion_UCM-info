#include <iostream>
using namespace std;

int main()
{
  double base, altura, area;
  cout << "Introduzca la base del triángulo: ";
  cin >> base;
  cout << "Introduzca la altura del triángulo: ";
  cin >> altura;
  area = base * altura / 2;
 cout << "El área de un triángulo de base " << base << " y altura "
       << altura << " es: " << area << endl;
  return 0;
}
