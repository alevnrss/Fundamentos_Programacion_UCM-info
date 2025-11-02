#include <iostream>
#include <string>
using namespace std;
#include <fstream>

int main() {
   string nif, producto;
   int unidades;
   double precio;
   char aux;
   ofstream archivo;
   
   archivo.open("output.txt"); // Apertura (creación)

   cout << "NIF del cliente (X para terminar): ";
   cin >> nif;
   while (nif != "X") {
      // Queda pendiente el Intro anterior...
      cin.get(aux); // Leemos el Intro
      cout << "Producto: ";
      getline(cin, producto);
      cout << "Unidades: ";
      cin >> unidades;
      cout << "Precio: ";
      cin >> precio;
      // Escribimos los datos en una línea del archivo...
      // Con un espacio de separación entre ellos
      archivo << nif << " " << unidades << " "
         << precio << " " << producto << endl;
      cout << "NIF del cliente (X para terminar): ";
      cin >> nif;
   }
   // Escribimos el centinela final...
   archivo << "X";
   archivo.close(); // Cierre del archivo

   return 0;
}
