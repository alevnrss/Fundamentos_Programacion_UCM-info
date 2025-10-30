/**
 * Escribe un programa que lea un numero entero y lo muestre invertido. 
 * Se entiende por invertir al dar la vuelta a los dígitos del número(su imagen especular).
 * El programa utilizara una funcion que devuelva una cadena con el numero invertido
 */

#include <iostream>
#include <string>
using namespace std;

string invertirNumero(int num);
int main(){
    int num;
    string numInvertido;
    cout << "Introduzca un numero entero: ";
    cin >> num;
    numInvertido = invertirNumero(num);
    cout << "El numero invertido es: " << numInvertido << endl;
    return 0;
}
string invertirNumero(int num){
    string numInvertido = to_string(num);
    reverse(numInvertido.begin(), numInvertido.end());
    return numInvertido;
}