/*
 * Dado un numero entero positivo
 * Calcular la suma de sus digitos
 */

#include <iostream>
using namespace std;

int main(){
    int n, suma = 0, digito;
    cout << "Ingrese un numero entero positivo: "; cin >> n;
    while(n != 0){
        digito = n % 10;
        suma += digito;
        n /= 10;
    }
    cout << "La suma de los digitos es: " << suma << endl;
    return 0;
}