#include <iostream>
using namespace std;
#include <fstream>

const int Max = 100;
typedef double tArray[Max];

double media(const tArray lista, int cont);

int main() {
   tArray lista;
   int contador = 0;
   double valor, med;
   ifstream archivo;
   archivo.open("lista.txt");
   if (archivo.is_open()) {
      archivo >> valor;
      while ((valor != -1) && (contador < Max)) {
         lista[contador] = valor;
         contador++;
         archivo >> valor;
      }
      archivo.close();
      med = media(lista, contador);
      cout << "Media de los elementos de la lista: " << med << endl;
   }
   else {
      cout << "¡No se pudo abrir el archivo!" << endl;
   }
   
   return 0;
}

double media(const tArray lista, int cont) {
   double med, total = 0;
   
   for (int ind = 0; ind < cont; ind++) {
      total = total + lista[ind];
   }
   
   med = total / cont;
   
   return med;
}
