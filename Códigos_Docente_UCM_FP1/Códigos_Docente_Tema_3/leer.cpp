#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include <iomanip> // Formato de salida

int main() {
   const int IVA = 21;
   string nif, producto;
   int unidades;
   double precio, neto, total, iva;
   char aux;
   ifstream archivo;
   int contador = 0;
   
   archivo.open("compras.txt"); // Apertura
   if (archivo.is_open()) { // Existe el archivo
      archivo >> nif; // Primer NIF
      while (nif != "X") {
         archivo >> unidades >> precio;
         archivo.get(aux); // Salta el espacio
         getline(archivo, producto);
         contador++;
         neto = unidades * precio;
         iva = neto * IVA / 100;
         total = neto + iva;
         cout << "Compra " << contador << ".-" << endl;
         cout << "   " << producto << ": " << unidades
            << " x " << fixed << setprecision(2)
            << precio << " = " << neto << " - I.V.A.: " 
            << iva << " - Total: " << total << endl;
         archivo >> nif; // Siguiente NIF
      }
      archivo.close(); // Cierre
   }
   else {
      cout << "ERROR: No se ha podido abrir el archivo"
         << endl;
   }
   
   return 0;
}
