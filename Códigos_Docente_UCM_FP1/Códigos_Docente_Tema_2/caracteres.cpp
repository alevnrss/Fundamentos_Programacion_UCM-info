#include <iostream>
using namespace std;

int main()
{
   char caracter1 = 'A', caracter2 = '1', caracter3 = '&';
   cout << "Caracter 1 (A).-" << endl;
   cout << "Alfanumerico? " << isalnum(caracter1) << endl;
   cout << "Alfabetico? " << isalpha(caracter1) << endl;
   cout << "Digito? " << isdigit(caracter1) << endl;
   cout << "Mayuscula? " << isupper(caracter1) << endl;
   caracter1 = tolower(caracter1);
   cout << "En minuscula: " << caracter1 << endl;
   cout << "Caracter 2 (1).-" << endl;
   cout << "Alfabetico? " << isalpha(caracter2) << endl;
   cout << "Digito? " << isdigit(caracter2) << endl;
   cout << "Caracter 3 (&).-" << endl;
   cout << "Alfanumerico? " << isalnum(caracter3) << endl;
   cout << "Alfabetico? " << isalpha(caracter3) << endl;
   cout << "Digito? " << isdigit(caracter3) << endl;

   return 0;
}
