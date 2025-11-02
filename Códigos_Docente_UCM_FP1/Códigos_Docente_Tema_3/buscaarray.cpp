#include <iostream>
using namespace std;
#include <fstream>

const int Dias = 365; // Año no bisiesto
const double Umbral = 1000;
typedef double tVentas[Dias];

int busca(const tVentas ventas);
// Devuelve el índice del primer elemento encontrado, o -1 si no se encuentra

int main() {
   tVentas ventas;
   int indice;
   ifstream archivo;
   archivo.open("ventas.txt");
   if (archivo.is_open()) {
      for (int i = 0; i < Dias; i++) {
         archivo >> ventas[i];
      }
      archivo.close();
      indice = busca(ventas);
      if (indice == -1) {
         cout << "¡No encontrado!" << endl;
      }
      else {
         cout << "Encontrado en el día " << indice + 1 << ": " << ventas[indice] << endl;
      }
   }
   else {
      cout << "¡No se ha podido abrir el archivo!" << endl;
   }
   
   return 0;
}

int busca(const tVentas ventas) {
// Devuelve el índice del primer elemento mayor que el Umbral, o -1 si no se encuentra
   bool encontrado = false; 
   int ind = 0;
   
   while ((ind < Dias) && !encontrado) {
      if (ventas[ind] > Umbral) {
         encontrado = true;
      }
      else {
         ind++;
      }
   }
   
   if (!encontrado) {
      ind = -1;
   }
   
   return ind;
}
