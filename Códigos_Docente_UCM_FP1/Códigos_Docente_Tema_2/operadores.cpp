#include <iostream>
using namespace std;

int main()
{
   int entero1 = 15, entero2 = 4;
   double real1 = 15.0, real2 = 4.0;
   cout << "Operaciones entre los números 15 y 4:" << endl;
   cout << "División entera (/): " << entero1 / entero2 << endl;
   cout << "Resto de la división (%): " << entero1 % entero2 << endl;
   cout << "División real (/): " << real1 / real2 << endl;
   cout << "Num = " << real1 << endl;
   real1 = -real1;
   cout << "Cambia de signo (-): " << real1 << endl;
   real1 = -real1;
   cout << "Vuelve a cambiar (-): " << real1 << endl;
   cout << "Se incrementa antes (++ prefijo): " << ++real1 << endl;
   cout << "Se muestra antes de incrementar (posfijo ++): " 
        << real1++ << endl;
   cout << "Ya incrementado: " << real1 << endl;
   
   return 0;
}
