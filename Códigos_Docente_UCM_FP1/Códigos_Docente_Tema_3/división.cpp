#include <iostream>
using namespace std;

int main()
{
   double numerador, denominador, resultado;
   cout << "Numerador: "; 
   cin >> numerador;
   cout << "Denominador: "; 
   cin >> denominador;
   if (denominador == 0) {
      cout << "Imposible dividir entre 0!";
   }
   else {
      resultado = numerador / denominador;
      cout << "Resultado: " << resultado << endl;
   }
  
   return 0;
}
