#include <iostream>
using namespace std;

long long int suma(int n);

int main() {
   int num;
   
   cout << "Número final: "; 
   cin >> num;
   
   if (num > 0) { // El número debe ser positivo
      cout << "La suma de los números entre 1 y " 
           << num << " es: " << suma(num);
   }
   
   return 0;
}

long long int suma(int n) {
   long long int total = 0;
   
   for (int i = 1; i <= n; i++) { 
      total = total + i;
   }
   
   return total;
}
