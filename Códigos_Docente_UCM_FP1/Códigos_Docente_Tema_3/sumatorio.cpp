#include <iostream>
using namespace std;

long long int suma(int n);

int main()
{
   int num;
   
   cout << "N = ";
   cin >> num;
   cout << "Sumatorio:" << suma(num);

   return 0;
}

long long int suma(int n) {
   int sumatorio = 0;
   
   for (int i = 1; i <= n; i++) {
      sumatorio = sumatorio + i;
   }
   
   return sumatorio;
}
