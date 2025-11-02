#include <iostream>
using namespace std;

const int Dias = 7;
typedef double tTemp[Dias];

double media(const tTemp temp);

int main()
{
   tTemp temp;
   
   for (int i = 0; i < Dias; i++) {
      cout << "Temperatura del día " << i + 1 << ": ";
      cin >> temp[i];
   }
   
   cout << "Temperatura media: " << media(temp) << endl;

   return 0;
}

double media(const tTemp temp) {
   double med, total = 0; 
   
   for (int i = 0; i < Dias; i++) {
      total = total + temp[i];
   }
   med = total / Dias;
   
   return med;
}
