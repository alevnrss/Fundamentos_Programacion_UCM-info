#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>

int sumaSecuencia();

int main()
{ 
   cout << fixed << setprecision(3) << "Suma = " << sumaSecuencia() << endl;
   
   return 0;
}

int sumaSecuencia() {
   double d, suma = 0;
   ifstream archivo; // Archivo de entrada (lectura)
   archivo.open("datos.txt");
   if (archivo.is_open()) {
      archivo >> d; // Obtener el primero
      while (d != 0) { // Mientras no sea el centinela
         suma = suma + d; // Procesar el dato
         archivo >> d; // Obtener el siguiente
      }
      archivo.close();
   }
   return suma;
}

